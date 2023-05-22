#include"stdio.h"
#include"iostream"
typedef struct Node
{
    int Data;
    Node *pNext; // duoi lien ket giua cac Node
}Node;

typedef struct List
{
    Node *pHead;
    Node *pTail; 
}List;
void Khoitao( List &l )
{
    l.pHead = l.pTail = NULL;  // Danh sach moi khoi tao chua co phan tu
}
// ham khoi tao 1 cai Node
Node *KhoitaoNODE( int x )
{
    Node *p = new Node; // cap vung nho cho con tro p
    if ( p == NULL )
    {
        printf("\n ENRROL ");
        return NULL;
    }
    p -> Data = x; // truyen gia tri x vao cho data
    p -> pNext = NULL; // khai bao node thi no chua co lien ket voi node nao het nen duoi lien ket cua no se tro den Null
    return p;
}
//Them node vao dau danh sach lien ket 
void themvaodau( List &l, Node *p )
{
    //danh sach dang rong 
    if( l.pHead == NULL )
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        p -> pNext = l.pHead; // Node moi se tro den dau danh sach noi ma pHead dang giu
        l.pHead = p; // cap nhat lai pHead chinh la node moi 'P'
    }
}
void themvaocuoi( List &l, Node *p )
{
    if ( l.pHead == NULL )
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        l.pTail -> pNext = p; // cho con tro pTail lien ket voi p 
        l.pTail = p; // cap nhat lai p la node cuoi danh sach "pTail"
    }
}
void xuatdanhsach( List l )
{
    for( Node *k = l.pHead; k != NULL ; k = k -> pNext )
    {
        printf("\n\t %d", k->Data );
    }
}
int main()
{
    List l;
    Khoitao(l);
    int n;
    int x;
    printf("Nhap so luong node can them: ");
    scanf("%d",&n);
    for ( int i=0; i<n; i++)
    {
        printf("\nNhap gia tri so nguyen: ");
        scanf("%d", &x);
        Node *p = KhoitaoNODE(x);
        themvaodau(l,p);
    }
    printf("\nDanh sach lien ket: ");
    xuatdanhsach(l);
    printf(" \n ");
system( " pause ");
return 0;
}