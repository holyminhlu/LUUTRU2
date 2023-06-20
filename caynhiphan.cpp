#include"stdio.h"
#include"conio.h"
#include"iostream"
#include"stdlib.h"

struct Node
{
	int Data;
	struct Node *left;
	struct Node *right;
};

typedef struct Node NODE;
typedef NODE *Tree;

void Khoitao( Tree &t )
{
	t = NULL;
}
void Themphantu( Tree &t, int x )
{
	if( t == NULL )
	{
		NODE *p = new NODE;
		p -> Data = x;
		p -> left = p -> right = NULL;
		t = p;
	}
	else
	{
		if( t -> Data > x )
		{
			Themphantu( t -> left,x);
		}
		else
		{
			Themphantu( t-> right,x);
		}
	}
}
void NLR( Tree &t )
{
	if( t != NULL )
	{
		printf("%d\t",t->Data);
		NLR(t->left);
		NLR(t->right);
	}
}
void LNR( Tree &t )
{
	if( t != NULL )
	{
		LNR(t->left);
		printf("%d\t",t->Data);
		LNR(t->right);
	}
}
void LRN( Tree &t )
{
	if( t != NULL )
	{
		LRN(t->left);
		LRN(t->right);
		printf("%d\t",t->Data);
	}
}
int ChieuCao( Tree &t )
{
	if( t == NULL )
	{
		return 0;
	}
	else
	{
		int Left_cc = ChieuCao(t->left);
		int Right_cc = ChieuCao( t -> right);
		if( Left_cc > Right_cc )
		{
			return Left_cc + 1;
		}
		else
		{
			return Right_cc + 1;
		}
	}
}
int SoNut( Tree &t )
{
	if( t == NULL)
	{
		return 0;
	}
	else
	{
		return 1 + SoNut( t -> right ) + SoNut( t -> left );
	}
}
int SoNutLa(  Tree &t )
{
	if( t == NULL )
	{
		return 0;
	}
	else if( t -> left == NULL && t -> right == NULL)
	{
		return 1;
	}
	else
	{
		return SoNutLa( t -> left ) + SoNutLa( t -> right );
	}
}
int NutLa1(  Tree &t  )
{
	if( t == NULL )
	{
		return 0;
	}
	else if ( (t -> left == NULL && t -> right != NULL ) || ( t -> left != NULL && t -> right == NULL ))
	{
		return 1 + NutLa1( t -> left ) + NutLa1( t -> right );
	}
	else
	{
		return NutLa1( t -> left ) + NutLa1( t -> right );
	}
}
int NutLa2(  Tree &t  )
{
	if(t == NULL )
	{
		return 0;
	}
	else if ( t -> left != NULL && t -> right != NULL )
	{
		return 1 + NutLa2( t -> left ) + NutLa2( t -> right );
	}
	else
	{
		return NutLa2( t -> left ) + NutLa2( t -> right );
	}
}
int main()
{
	Tree t;
	Khoitao(t);
	int n;
	int x;
	printf("\nNhap so luong phan tu: ");
	scanf("%d",&n);
	for( int i=0; i<n; i++)
	{
		printf("\nNhap cac phan tu:  ");
		scanf("%d",&x);
		Themphantu(t,x);
	}
	printf("\nNLR: \t");
	NLR(t);
		printf("\nLNR: \t");
		LNR(t);
			printf("\nLRN: \t");
			LRN(t);
			printf("\n");
printf("\nChieu cao cua cay: %d ", ChieuCao(t));
printf("\nSo nut cua cay: %d ", SoNut(t));
printf("\nSo nut la: %d ", SoNutLa(t));
printf("\nSo nut la 1 con: %d ", NutLa1(t));
printf("\nSo nut la 2 con: %d ", NutLa2( t));
	printf("\n");
system("pause");
return 0;
}
