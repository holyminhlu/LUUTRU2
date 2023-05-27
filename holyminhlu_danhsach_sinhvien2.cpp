#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"string.h"
typedef struct ThiSinh 
{
	int SoBaoDanh;
	char Ho_TenSV[100];
	char DiaChi[100];
	int NamSinh;
	 
}ThiSinh;
typedef struct ThiSinh SV;
struct NODE
{
	SV Data;
	NODE *pNext;
}NODE;
typedef struct NODE Node;
struct List
{
	Node *pHead;
	Node *pTail;
}List;
typedef struct List LIST;
void khoitao_dsrong( LIST &L)
{
	L.pHead = NULL;
	L.pTail = NULL;
}
int Kiemtra_rong( LIST &L)
{
	if( L.pHead == NULL)
	{
return 1;
	}
	return 0;
}
Node *TaoNode ( SV x )
{
	Node *p;
	p = new Node;
	if( p == NULL )
	{
		printf("\nBO NHO KHONG KHA DUNG !!! ");
return NULL;
	}
	p -> Data = x;
	p -> pNext = NULL;
return p;
}
void themvao_dau( LIST &L, Node *p)
{
	if( L.pHead == NULL )
	{
		L.pHead = p;
		L.pTail = p;
	}
	else
	{
		L.pTail -> pNext = p;
		L.pTail =p;
	}
}
void Nhap_Danhsach(LIST &L, int n)
{
    printf("\nNHAP THONG TIN THI SINH\n");
    for(int i = 0; i < n; i++)
	{
        SV x;
        printf("Nhap thi sinh %d: ", i+1 );
        printf ("\nNhap so bao danh thi sinh : ");
		fflush(stdin);
        scanf("%d",&x.SoBaoDanh);
        printf ("Nhap ten thi sinh : ");
		fflush(stdin);
        gets(x.Ho_TenSV);
        printf ("Nhap dia chi: ");
		fflush(stdin);
        gets(x.DiaChi);
        printf("Nam sinh: ");
        fflush(stdin);
        scanf("%d",&x.NamSinh);
        printf ("\n");
        Node *p = new Node;
        p = TaoNode(x);
        themvao_dau(L,p);
    }
}
void XuatDS( LIST &L )
{
	printf("\n===============================================================================================================\n");
	for( Node *k = L.pHead; k != NULL; k = k-> pNext )
	{
	 printf("So Bao Danh: %d\t     Ten Thi Sinh: %s\t     Dia Chi: %s\t     Nam Sinh: %d\t     \n", k->Data.SoBaoDanh, k->Data.Ho_TenSV, k->Data.DiaChi, k->Data.NamSinh );
	}
	printf("\n===============================================================================================================\n");
}
void xoaphantudau( LIST &L )
{
	Node *p = new Node;
	p = L.pHead;
	L.pHead = L.pHead -> pNext;
	p -> pNext = NULL;
	delete p;
}
void xoadanhsach( LIST &L )
{
	for( Node *c = L.pHead; c != NULL; c=c->pNext )
	{
		Node *r = L.pHead;
		L.pHead = r->pNext;
		delete r;
	}
	XuatDS(L);
}
int main(){
system(" color 71 ");
    LIST L;
    int n;
    printf("\nNHAP SO LUONG THI SINH: ");
    scanf("%d",&n);
    khoitao_dsrong(L);
    Nhap_Danhsach(L,n);
    printf("\nDANH SACH THI SINH\n");
    XuatDS(L);
    printf("\nDANH SACH THI SINH DA XOA PHAN TU DAU:\n");
    xoaphantudau(L);
    XuatDS(L);
    printf("\nDANH SACH THI SINH DA XOA TAT CA PHAN TU:\n");
    xoadanhsach(L);
system(" pause ");
return 0;
}
