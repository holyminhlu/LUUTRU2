#include"stdio.h"
#include"iostream"
#include"conio.h"
#define Max 1000
using namespace std;
struct Node
{
	float Data;
	Node *Left;
	Node *Right;
};
Node *TaoNode( float x )
{
	Node *p = new Node();
	p -> Data = x;
	p -> Left = p -> Right = NULL;
return p;
}
Node *Timvitri( Node *Root, float x )
{
	if( Root == NULL )
	{
		return NULL;
	}
	Node *p = Root;
	Node *f = p;
	while( p != NULL )
	{
		f = p;
		if( p -> Data > x )
		{
			p = p -> Left;
		}
		else
		{
			p = p -> Right; 
		}
	}
	return f;
}
void ChenNode( Node *&Root, float x )
{
	Node *q = TaoNode(x);
	if( Root == NULL )
	{
		Root = q;
		return ;
	}
	else
	{
		Node *g = Timvitri( Root, x);
		if( g != NULL )
		{
			if( g -> Data > x)
			{
				g -> Left = q;
			}
			else
			{
				g -> Right = q;
			}
		}
		
	}
}
void CreateTree( Node *&Root, float a[], int n )
{
	for( int i=0; i<n; i++ )
	{
		ChenNode(Root, a[i]);
	}
}
void LNR( Node *Root )
{
	if( Root != NULL )
	{
		LNR( Root -> Left );
		printf("%f \t", Root -> Data );
		LNR( Root -> Right );
	}
}
void NLR( Node *Root )
{
	if( Root != NULL )
	{
		printf("%f \t", Root -> Data);
		NLR( Root -> Left );
		NLR( Root -> Right );
	}
}
void LRN( Node *Root )
{
	if( Root != NULL )
	{
		LRN( Root -> Left );
		LRN( Root -> Right );
		printf("%f \t", Root -> Data );
	}
}
int ChieuCao( Node * Root )
{
	if( Root == NULL )
	{
		return 0;
	}
	else
	{
		int Left_cc = ChieuCao(Root->Left);
		int Right_cc = ChieuCao( Root -> Right);
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
int SoNut( Node * Root )
{
	if( Root == NULL)
	{
		return 0;
	}
	else
	{
		return 1 + SoNut( Root -> Right ) + SoNut( Root -> Left );
	}
}
int SoNutLa( Node *Root )
{
	if( Root == NULL )
	{
		return 0;
	}
	else if( Root -> Left == NULL && Root -> Right == NULL)
	{
		return 1;
	}
	else
	{
		return SoNutLa( Root -> Left ) + SoNutLa( Root -> Right );
	}
}
int NutLa1( Node *Root )
{
	if( Root == NULL )
	{
		return 0;
	}
	else if ( (Root -> Left == NULL && Root -> Right != NULL ) || ( Root -> Left != NULL && Root -> Right == NULL ))
	{
		return 1 + NutLa1( Root -> Left ) + NutLa1( Root -> Right );
	}
	else
	{
		return NutLa1( Root -> Left ) + NutLa1( Root -> Right );
	}
}
int NutLa2( Node * Root )
{
	if(Root == NULL )
	{
		return 0;
	}
	else if ( Root -> Left != NULL && Root -> Right != NULL )
	{
		return 1 + NutLa2( Root -> Left ) + NutLa2( Root -> Right );
	}
	else
	{
		return NutLa2( Root -> Left ) + NutLa2( Root -> Right );
	}
}
int main()
{
	int n;
	float a[Max];
	Node *Root = NULL;
	printf("\nNhap so luong phan tu: ");
	scanf("%d", &n);
	for( int t=0; t<n; t++ )
	{
		printf("Nhap phan tu thu %d: ", t);
		scanf("%f",&a[t]);
	}
printf("\n");
CreateTree( Root, a, n);
printf("\n");
printf("Create LNR: ");
LNR(Root);
printf("\n");
printf("Create NLR: ");
NLR(Root);
printf("\n");
printf("Create LRN: ");
LRN(Root);
printf("\n");
printf("\nChieu cao cua cay: %d ", ChieuCao(Root));
printf("\nSo nut cua cay: %d ", SoNut(Root));
printf("\nSo nut la: %d ", SoNutLa(Root));
printf("\nSo nut la 1 con: %d ", NutLa1(Root));
printf("\nSo nut la 2 con: %d ", NutLa2( Root));
printf("\n\n");
system("pause");
return 0;
}


