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
system("pause");
return 0;
}
