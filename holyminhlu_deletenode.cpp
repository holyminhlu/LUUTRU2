#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
	float data;
	struct Node *tr;
	struct Node *ph;
}node;

node* TaoNode(float data) 
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	newNode->tr = NULL;
	newNode->ph = NULL;
	return newNode;
}

node* ChenNode(node* root, float data) 
{
if (root == NULL) 
{
	return TaoNode(data);
}
if (data < root->data) 
{
    root->tr = ChenNode(root->tr, data);
} 
else if (data > root->data) 
{
    root->ph = ChenNode(root->ph, data);
}

return root;
}

void NLR(node* root) 
{
	if (root == NULL) 
{
return;
}
	printf("%.2f ", root->data);
	NLR(root->tr);
	NLR(root->ph);
}

void LNR(node* root) 
{
	if (root == NULL) 
{
return;
}
	LNR(root->tr);
	printf("%.2f ", root->data);
	LNR(root->ph);
}

void LRN(node* root) 
{
	if (root == NULL) 
{
return;
}
	LRN(root->tr);
	LRN(root->ph);
	printf("%.2f ", root->data);
}

node* Vitrixoa(node* root) 
{
while (root->tr != NULL) 
{
	root = root->tr;
}
return root;
}

node* deleteNode(node* root, float data) 
{
	if (root == NULL) 
{
return root;
}
if (data < root->data) 
{
    root->tr = deleteNode(root->tr, data);
} 
else if (data > root->data) 
{
    root->ph = deleteNode(root->ph, data);
} else {
    // Node can xoa la node la
    if (root->tr == NULL) 
	{
        node *temp = root->ph;
        free(root);
        return temp;
    } else if (root->ph == NULL) 
	{
        node *temp = root->tr;
        free(root);
        return temp;
    }

    // Node can xoa co 2 con
    node *temp = Vitrixoa(root->ph);
    root->data = temp->data;
    root->ph = deleteNode(root->ph, temp->data);
}

return root;
}

void deleteTree(node* root) 
{
	if (root == NULL) 
{
return;
}
	deleteTree(root->tr);
	deleteTree(root->ph);
	free(root);
}

int main() 
{
	node* root = NULL;
	int luachon = 0;
	float data;
while (1) 
{
	printf("======================================================================================================================\n");
	printf("============================================1. Them NODE                ==============================================\n");
	printf("============================================2. Duyet Cay ( NLR-LNR-LRN )==============================================\n");
	printf("============================================3. Tim NODE                 ==============================================\n");
	printf("============================================4. Xoa NODE                 ==============================================\n");
	printf("============================================5. Xoa Toan Bo Cay          ==============================================\n");
	printf("============================================6. Exit                     ==============================================\n");
	printf("============================================Moi Ban Nhap Lua Chon       ==============================================\n");
	printf("======================================================================================================================\n");
    scanf("%d", &luachon);

    switch(luachon) 
	{
        case 1:
            printf("Nhap gia tri can them: ");
            scanf("%f", &data);
            root = ChenNode(root, data);
            break;
        case 2:
            printf("\nDuyet cay theo NLR: ");
            NLR(root);

            printf("\nDuyet cay theo LNR: ");
            LNR(root);

            printf("\nDuyet cay theo LRN: ");
            LRN(root);
            printf("\n");
            break;
        case 3:
            printf("Nhap gia tri can tim: ");
            scanf("%f", &data);
            if (root == NULL) 
			{
                printf("Cay rong\n");
            } else {
                node *p = root;
                while (p != NULL && p->data != data) 
				{
                    if (data < p->data) 
					{
                        p = p->tr;
                    } else if (data > p->data) 
					{
                        p = p->ph;
                    }
                }
                if (p == NULL) 
				{
                    printf("Khong tim thay gia tri trong cay\n");
                } else 
				{
                    printf("Tim thay gia tri trong cay\n");
                }
            }
            break;
        case 4:
            printf("Nhap gia tri can xoa: ");
            scanf("%f", &data);
            root = deleteNode(root, data);
            break;
        case 5:
            deleteTree(root);
            root = NULL;
            printf("Xoa toan bo cay thanh cong\n");
            break;
        case 6:
            printf("Thoat chuong trinh\n");
            exit(0);
            break;
        default:
            printf("Lua chon khong hop le\n");
    }
}

return 0;
}
