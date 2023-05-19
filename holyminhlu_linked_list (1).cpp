#include"stdio.h"
#include"iostream"
#include"conio.h"
#include"stdlib.h"
typedef struct NODE
{
	int DATA;
	NODE* pNext;
}NODE;

typedef struct LIST
{
	NODE* pHead;
	NODE* pTail;
}LIST;
void list_rong( LIST &L )
{
	L.pHead = L.pTail = NULL;
}
NODE *new_element()
   {
   	NODE*p;
   	int x;
    	p=( NODE* ) malloc(sizeof( NODE ));
    	if(p!=NULL)
    	{
			printf("\nNhap gia tri cho nut moi:  ");
			scanf("%d", &x);
   			p->DATA = x;
   			p->pNext = NULL;
		return p;
		}
return NULL;
}
NODE *AddNode(LIST &L, NODE* new_element)
{
    if( L.pHead == NULL )
	{
        L.pHead = new_element; 
        L.pTail = L.pHead;
    }
	else
	{
        new_element -> pNext = L.pHead;
        L.pHead = new_element; 
    }
}
void tao_list( LIST &L)
{
	int n;
	NODE *p;
	printf("\nNhap so phan tu: ");
	scanf("%d", &n);
	for( int i=1; i<=n; i++)
	{
		p=new_element();
		AddNode(L,p);
	}
}
void xuat_list(LIST &L) // dung vong lap for de xuat ds
{
	NODE *k = L.pHead;
	printf("\nXuat danh sach lien ket vua nhap: ");
	for( ; k!=NULL ; k = k-> pNext)
	{
		printf("\n\t %d", k->DATA );
	}
	printf("\n");
}
void chieu_dai_ds( LIST & L)
{
	int length = 0;
	NODE * current = L.pHead;
	for( ; current != NULL; current= current -> pNext )
	{
		length++;
	}
printf("\nChieu dai cua danh sach la: %d  \n", length );
}
int main()
{
	int x;
	LIST L;
	list_rong(L);
	tao_list(L);
	xuat_list(L);
	chieu_dai_ds(L);
	//
system("Pause");
return 0;
}
