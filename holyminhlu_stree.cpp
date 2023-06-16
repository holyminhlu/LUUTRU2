#include"stdio.h"
#include"iostream"
#define Max 1000
 struct Node
{
	int Data;
	Node *Left;
	Node *Right;
};
Node *TaoNode( int x )
{
	Node *p = new Node();
	p -> Data = x;
	p -> Left = p -> Right = NULL;
	return p;
}
Node *TimViTri( Node *root, int x )
{
	if( root == NULL )
	{
		return NULL;
	}
	Node *p = root;
	Node *f = p;
	while( p!= NULL )
	{
		f = p;
		if( p -> Data > x )
		{
			p = p -> Left;
		}
		else 
		{
			p = p-> Right;
		}
	}
	return f;
}
void ChenNode( Node * &root, int x )
{
	Node *n = TaoNode(x);
	if( root == NULL )
	{
		root = n;
		return ;
	}
	else
	{
		Node *f = TimViTri( root, x );
		if( f!= NULL )
		{
			if( f -> Data > x )
			{
				f -> Left = n;
			}
			else
			{
				f -> Right =n;
			}
		}
	}
}
void Taocay( Node * &root, int a[], int n)
{
	for( int i=0; i<n; i++)
	{
		ChenNode(root,a[i]);
	}
}
void LNR( Node *root )
{
	if( root != NULL)
	{
		LNR( root -> Left );
		printf("%d\t", root->Data);
		LNR( root -> Right);
	}
}
void NLR(Node* root)
{
	if (root != NULL)
	{
		printf("%d\t", root->Data);
		NLR(root->Left);
		NLR(root->Right);
	}
}
void LRN(Node* root)
{
	if (root != NULL)
	{
		LRN(root->Left);
		LRN(root->Right);
		printf("%d\t", root->Data);
	}
}
// Tinh chieu cao cay
int Chieucao(Node* root) 
{
    if (root == NULL) 
	{
        return 0;
    } else 
	{
        int Left_cc = Chieucao(root->Left);
        int Right_cc = Chieucao(root->Right);

        if (Left_cc > Right_cc) 
		{
            return Left_cc + 1;
        } else 
		{
            return Right_cc + 1;
        }
    }
}
// Dem so nut cua cay
int Sonut( Node* root ) 
{
    if (root == NULL) 
	{
        return 0;
    } else 
	{
        return 1 + Sonut(root->Left) + Sonut(root->Right);
    }
}
// dem so nut la cua cay
int SoNutLa( Node* root )
{
    if (root == NULL) 
	{
        return 0;
    } else if (root->Left == NULL && root->Right == NULL) 
	{
        return 1;
    } else 
	{
        return SoNutLa(root->Left) + SoNutLa(root->Right);
    }
}
// Dem so nut co dung 1 con
int Nut1con( Node* root) 
{
    if (root == NULL) 
	{
        return 0;
    } else if ((root->Left == NULL && root->Right != NULL) || (root->Left != NULL && root->Right == NULL)) 
	{
        return 1 + Nut1con(root->Left) + Nut1con(root->Right);
    } else {
        return Nut1con(root->Left) + Nut1con(root->Right);
    }
}
// Dem so nut co dung 2 con
int Nut2con( Node* root) 
{
    if (root == NULL) 
	{
        return 0;
    } else if (root->Left != NULL && root->Right != NULL) 
	{
        return 1 + Nut2con(root->Left) + Nut2con(root->Right);
    } else {
        return Nut2con(root->Left) + Nut2con(root->Right);
    }
}
int main()
{
	int n;
	int a[Max];
	Node *root = NULL;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	for( int k=0; k<n; k++)
	{
		printf("Nhap phan tu thu %d: ", k);
		scanf("%d",&a[k]);
	}
	printf("\n");
	Taocay(root, a, n);
	printf("Create NLR: ");
	NLR(root);
	printf("\n");
	printf("Create LNR: ");
	LNR(root);
	printf("\n");
	printf("Create LRN: ");
	LRN(root);
	printf("\n");
	
	printf("\n");
	printf("Chieu cao cua cay: %d", Chieucao(root));
	printf("\nSo nut cua cay: %d", Sonut(root));
	printf("\nSo nut la cua cay: %d", SoNutLa(root));
	printf("\nSo nut co dung 1 con cua cay: %d", Nut1con(root));
    printf("\nSo nut co dung 2 con cua cay: %d", Nut2con(root));

	printf("\n");
system("pause");
return 0;
}
