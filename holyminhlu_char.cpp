#include"stdio.h"
#include"conio.h"
#include"iostream"
#define Max 10000
struct Node
{
	char Data[Max];
	Node *trai;
	Node *phai;
};
Node *TaoNode( char x[] )
{
	Node *p = new Node();
	p -> Data[Max] = x[Max];
	p -> trai = p -> phai = NULL;
	return p;
}
Node * Timvitri( Node * root, char x[])
{
	if ( root == NULL )
	{
		return NULL;
	}
	Node *p = root;
	Node *f = p;
	while( p != NULL )
	{
		f = p;
		if ( p -> Data > x )
		{
			p = p -> trai;
		}
		else
		{
			p = p -> phai;
		}
	}
	return f;
}
void ChenNode( Node * &root, char x[] )
{
	Node *p = TaoNode(x);
	if( root == NULL )
	{
		root = p;
		return;
	}
	else 
	{
		Node *g = Timvitri( root,x);
		if ( g != NULL )
		{
			if( g -> Data > x )
			{
				g -> phai = p;
			}
			else
			{
				g -> trai = p;
			}
		}
	}
}
void Taocay( Node *&root, char a[], int n )
{
	for( int i=0; i<n; i++)
	{
		ChenNode(root,a[i]);
	}
}
void LNR(Node *root )
{
	if(root != NULL)
	{
	LNR(root->trai);
	printf("%c",root->Data);
	LNR(root->phai);
	}
}
void NLR(Node *root)
{
	if(root != NULL )
	{
	printf("%c",root->Data);
	NLR(root->trai);
	NLR(root->phai);
	}
}
void LRN( Node *root )
{
	if( root != NULL )
	{
		LRN(root->trai);
		LRN(root->phai);
		printf("%c",root->Data);
	}
}
int Chieucao( Node *root )
{
	if( root == NULL )
	{
		return 0;
	}
	else
	{
		int trai_cc = Chieucao(root->trai);
		int phai_cc = Chieucao(root->phai);	
		if( trai_cc > phai_cc )
		{
			return trai_cc + 1;
		}
		else
		{
			return phai_cc + 1;
		}
	}
}
int Sonut( Node *root )
{
	if( root == NULL )
	{
		return 0;
	}
	else
	{
		return 1 + Sonut(root->trai) + Sonut(root->phai);
	}
}
int Sonutla( Node *root )
{
	if( root == NULL )
	{
		return 0;
	}
	else if( root->trai == NULL && root->phai == NULL)
	{
		return 1;
	}
	else
	{
		return Sonutla(root->trai) + Sonutla(root->phai);
	}
}
int Nut1la( Node *root )
{
	if( root == NULL )
	{
		return 0;
	}
	else if((root->trai == NULL && root->phai != NULL) || (root->trai != NULL && root->phai == NULL ))
	{
		return 1 + Nut1la(root->trai) + Nut1la(root->phai);
	}
	else
	{
		return Nut1la(root->trai) + Nut1la(root->phai);
	}
}
int Nut2la(Node*root)
{
	if( root == NULL )
	{
		return 0;
	}
	else if( root->trai !=NULL && root->phai != NULL )
	{
		return 1 + Nut2la(root->trai) + Nut2la(root->phai);
	}
	else
	{
		return Nut2la(root->trai) + Nut2la(root->phai);
	}
}
int main()
{
	int n;
	char a[Max];
	Node *root = NULL;
	printf("Nhap so luong phan tu ( char ): ");
	scanf("%d",&n);
	for( int tl=0; tl<n; tl++)
	{
		printf("Nhap phan tu thu %d: ", tl);
		scanf("%c", &a[tl]);
	}
	Taocay(root,a,n);
	printf("\nCreate LNR: ");
	LNR(root);
	printf("\nCreate NLR: ");
	NLR(root);
	printf("\nCreate LRN: ");
	LRN(root);
	printf("\n");
	printf("\nChieu cao cay la %d ", Chieucao(root));
	printf("\nSo nut cay la %d ", Sonut(root));
	printf("\nSo nut la cua cay la %d ", Sonutla(root));
	printf("\nSo nut co 1 con la %d ", Nut1la(root));
	printf("\nSo nut co 2 con la %d ", Nut2la(root));
system("pause");
return 0;
	
}
