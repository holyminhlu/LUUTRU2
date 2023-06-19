#include"stdio.h"
#include"conio.h"
#include"iostream"
 typedef struct SinhVien
 {
 	char HoTenSV[30];
 	int MaSV;
 	int MaPhong;
 }SinhVien;
 
 typedef struct SinhVien SV;
struct Node
{
	SV data;
	Node *pnext;
}Node;
 typedef struct Node NODE;
struct List 
{
	NODE *phead;
	NODE *ptail;
}List;
typedef struct List LIST;

void Khoitao( LIST &l )
{
	l.phead = l.ptail = NULL;
}
bool kiemtra( LIST &l )
{
	if( l.phead ==  NULL )
	{
		return 1;
	}
return 0;
}
NODE *CreateNode( SV x )
{
	NODE *p = new NODE;
	if( p == NULL )
	{
		printf("\n Enrrol !!! ");
		return NULL;
	}
	p -> data = x;
	p -> pnext = NULL;
return p;
}
void addtail( LIST &l, NODE *p )
{
	if( l.phead == NULL )
	{
		l.phead = l.ptail = p;
	}
	else
	{
		l.ptail -> pnext = p;
		l.ptail = p;
	}
}
void xuatds( LIST &l )
{
	for( NODE *k = l.phead; k != NULL; k = k -> pnext)
	{
		printf("\n Ten SV: %s\t   Ma SV: %d\t   Ma Phong: %d\t ", k->data.HoTenSV, k->data.MaSV, k->data.MaPhong );
	}
}
void daonguoc( LIST &l )
{
	NODE *prew = NULL;
	NODE *curr = l.phead;
	NODE *pnext = NULL;
	while( curr != NULL )
	{
		pnext = curr -> pnext;
		curr -> pnext = prew;
		prew = curr;
		curr = pnext;
	}
	l.phead = prew;
}
void Nhapds( LIST &l, int n )
{
	printf("\nNhap thong tin sinh vien: ");
	for( int i=0; i<n; i++ )
	{
		SV x;
		printf("\nSinh Vien Thu %d \n", i+1);
		printf("Nhap ten: ");
		fflush(stdin);
		gets(x.HoTenSV);
		printf("Nhap Ma SV: ");
		scanf("%d", &x.MaSV);
		printf("Nhap ma phong: ");
		scanf("%d", &x.MaPhong);
		NODE *p = new NODE;
			p = CreateNode(x);
			addtail(l,p);
	}
}
int main()
{
	int SoPhong;
	LIST l; 
	int num=0;
	Khoitao(l);
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
//	Khoitao(l);
	Nhapds(l,n);
	printf("\nDANH SACH SINH VIEN: ");
	xuatds(l);
	printf("\nXUAT DANH SACH NGUOC: ");
	daonguoc(l);
	xuatds(l);
	printf("\nNhap so phong: ");
	scanf("%d", &SoPhong);
	for(NODE *k = l.phead; k != NULL; k = k -> pnext)
	{
	if(k->data.MaPhong == SoPhong)
		{
			printf("\n Ten SV: %s\t   Ma SV: %d\t   Ma Phong: %d\t ", k->data.HoTenSV, k->data.MaSV, k->data.MaPhong );
			num++;
		}
	}
	printf("\nSo sinh vien co cung Ma Phong: %d là %d sinh vien", SoPhong, num );
	printf("\n");
system("pause");
return 0;
}
