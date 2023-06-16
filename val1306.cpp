#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int val;
    struct Node *Lpt;
    struct Node *Rpt;
} Node;
Node *TaoNode(int val) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->val = val;
    newNode->Lpt = NULL;
    newNode->Rpt = NULL;
    return newNode;
}
Node *ChenNode(Node *root, int val) {
    if (root == NULL) {
        return TaoNode(val);
    }
    if (val < root->val) {
        root->Lpt = ChenNode(root->Lpt, val);
    }
    else if (val > root->val) {
        root->Rpt = ChenNode(root->Rpt, val);
    }
    return root;
}
void MucNode(Node *root, int muc, int giatri) {
    if (root == NULL) {
        return;
    }
    if (giatri == muc) {
        printf("%d ", root->val);
    }
    MucNode(root->Lpt, muc, giatri + 1);
    MucNode(root->Rpt, muc, giatri + 1);
}
int main() {
    int n;
    printf("Nhap so luong node muon them vao cay: ");
    scanf("%d", &n);
    int Nutgoc;
    printf("Nhap gia tri cua nut goc: ");
    scanf("%d", &Nutgoc);
    Node *root = TaoNode(Nutgoc);
    for (int i = 0; i < n - 1; i++) {
        int val;
        printf("Nhap gia tri cua node tiep theo: ");
        scanf("%d", &val);
        ChenNode(root, val);
    }
    int muc;
    printf("Nhap muc Node muon in: ");
    scanf("%d", &muc);
    printf("Cac node thuoc muc %d la: ", muc);
    MucNode(root, muc, 1);
    printf("\n\n");
system("pause");
return 0;
}

