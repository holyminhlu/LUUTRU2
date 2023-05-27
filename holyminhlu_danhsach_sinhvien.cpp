#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"string.h"
typedef struct SinhVien 
{
	int MaSV;
	char Ho_TenSV[100];
	float Diem;
	 
}SinhVien;
typedef struct SinhVien SV;
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
	//	L.pTail -> pNext = p;
	//	L.pTail =p;
		p -> pNext = L.pHead;
		L.pHead = p;
	}
}
void Nhap_Danhsach(LIST &L, int n)
{
    printf("NHAP THONG TIN SINH VIEN\n");
    for(int i = 0; i < n; i++)
	{
        SV x;
        printf ("\nNhap ma so sinh vien : ");
		fflush(stdin);
        scanf("%d",&x.MaSV);
        printf ("Nhap ten sinh vien : ");
		fflush(stdin);
        gets(x.Ho_TenSV);
        printf ("Nhap diem: ");
		fflush(stdin);
        scanf("%f",&x.Diem);
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
		 printf("  Ma SV: %d\t     Ten SV: %s\t     Diem SV: %2.f\t \n", k->Data.MaSV, k->Data.Ho_TenSV, k->Data.Diem);
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
    printf("NHAP SO LUONG SINH VIEN: ");
    scanf("%d",&n);
    khoitao_dsrong(L);
    Nhap_Danhsach(L,n);
    printf("\nDANH SACH SINH VIEN\n");
    XuatDS(L);
    printf("\nDANH SACH SINH VIEN DA XOA PHAN TU DAU:\n");
    xoaphantudau(L);
    XuatDS(L);
    printf("\nDANH SACH SINH VIEN DA XOA TAT CA PHAN TU:\n");
    xoadanhsach(L);
system(" pause ");
return 0;
}
