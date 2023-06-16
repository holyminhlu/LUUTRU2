#include"stdio.h"
#include"conio.h"
#include"iostream"
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node Node;
typedef Node *Tree;
// khoi tao cay
void Khoitaocay( Tree &t )
{
	t = NULL;
}
//them phan tu vao cay
void ThemNodevaoCay( Tree &t, int x )
{
	if( t == NULL ) // cay rong
	{
		Node *p = new Node; // tao 1 node them vao cay
		p -> data = x;  // truyen du lieu vao
		p -> left = p -> right = NULL;
		t = p; // p la node goc tuong duong x la node goc
	}
	else // cay co phan tu
	{
		// phan tu thm vao nho hon node goc 
		// thi them no vao ben trai
		if( t -> data > x )
		{
			ThemNodevaoCay( t -> left,x);
		}
		// phan tu thm vao lon hon node goc 
		// thi them no vao ben phai
		else if( t -> data < x )
		{
			ThemNodevaoCay( t -> right,x);
		}
	}
}
// ham xuat cay nhi phan NLR
void NLR( Tree &t )
{
	if( t != NULL )
	{
	   printf("%d \t", t->data);
	   NLR(t->left);
	   NLR(t->right);
	}
}
// ham nhao du lieu
void Menu( Tree &t )
{
	while(true)
	{
		system("cls");
	printf("\n=======================================");
			printf("\nMenu");
			printf("\n1.Nhap Du lieu");
			printf("\n2.Xuat Du lieu");
			printf("\n0. End");
	printf("\n=======================================");
		int luachon;
	printf("\nNhap lua chon: ");
	scanf("%d",&luachon);
	if( luachon < 0 || luachon > 10 )
	{
		printf("\nLua chon khong hop le ");
		system("pause");
	}
	else if( luachon == 1 )
	{
		int x;
		printf("\nNhap so nguyen x: ");
		scanf("%d",&x);
		ThemNodevaoCay(t,x);
	}
	else if( luachon == 2 )
	{
		printf("\nNLR \t:");
		NLR(t);
		printf("\n");
		system("pause");
	}
	else
	{
		break;
	}
	}
}
int main()
{
	Tree t;
	Khoitaocay(t);
	Menu(t);
system("pause");
return 0;
}
