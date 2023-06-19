#include"stdio.h"
#include"conio.h"
#include"iostream"
#include"stdlib.h"
typedef struct SinhVien
{
	char Ten[50];
	char Ma[20];
	int Phong;
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
bool Kiemtra( LIST &l )
{
	if( l.phead == NULL )
	{
		return 0;
	}
return 1;
}
NODE *CreateNode( SV x )
{
	NODE *p = new NODE;
	if( p == NULL )
	{
		printf("\nEnrrol !!! ");
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
		l.phead = p;
		l.ptail = p;
	}
	else
	{
		l.ptail -> pnext = p;
		l.ptail = p;
	}
}
void daonguoc( LIST &l )
{
	NODE *prew = NULL ;
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
void xuatds( LIST &l )
{
	for( NODE *k = l.phead; k != NULL; k = k -> pnext)
	{
		printf("\n Ten: %s\t Ma: %s\t Phong: %d\t ", k->data.Ten, k->data.Ma, k->data.Phong);
	}
}
void nhapds( LIST &l, int n )
{
	printf("\nNhap thong tin sinh vien: ");
	for( int i=0; i<n; i++ )
	{
		SV x;
		printf("\nSinh vien thu %d \n",i+1);
		printf("TEN: ");
		fflush(stdin);
		gets(x.Ten);
		printf("MaSo: ");
		fflush(stdin);
		gets(x.Ma);
		printf("Phong: ");
		fflush(stdin);
		scanf("%d", &x.Phong);
		NODE *p = new NODE;
			p = CreateNode(x);
		addtail(l,p);
	}
}
int main()
{
	LIST l;
	Khoitao(l);
	int n;
	int sophong;
	int num = 0;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	nhapds(l,n);
	printf("\nDanh sach sinh vien vua nhap: ");
	xuatds(l);
	printf("\nDanh sach sinh vien dao nguoc: ");
	daonguoc(l);
	xuatds(l);
	printf("\nNhap so phong can tim: ");
	scanf("%d", &sophong);
	for( NODE *k = l.phead; k != NULL; k=k->pnext)
	{
		if ( k->data.Phong == sophong )
		{
			printf("\n Ten: %s\t Ma: %s\t Phong: %d\t ", k->data.Ten, k->data.Ma, k->data.Phong);
			num ++;
		}
	}
	printf("\nSo sinh vien co cung ma phong so %d la %d sinh vien.\n", sophong, num );
system("pause");
return 0;
}

