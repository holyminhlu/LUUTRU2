#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"string.h"
#define Max 100 
typedef int STAKE;
struct Stack
{
    int Top; 
    STAKE Data[Max]; 
};
void Init (Stack &S) 
{
    S.Top = 0; //Stack rong khi Top la 0
}
 
int Isempty(Stack S) //kiem tra Stack rong
{
    return (S.Top == 0);
}
 
int Isfull(Stack S) //kiem tra Stack day
{
    return (S.Top == Max); //
}
 
void Push(Stack &S, STAKE x) //them phan tu vao Stack
{
    if (!Isfull(S))
    {
        S.Data[S.Top] = x;
        S.Top ++; 
    }
}
 
int Peak(Stack S) //Lay phan tu o dau Stack nhung khong xoa
{
    return S.Data[S.Top-1]; 
}
 
int Pop(Stack &S) //Loai bo phan tu khoi Stack
{
    if (!Isempty(S))
    {
        S.Top --;
        return S.Data[S.Top]; 
    }
}
void Input (Stack &S)
{
    int n;
    STAKE x;
    do
    {
        printf("Nhap so phan tu cua Stack (<%d) :",Max);
        scanf("%d",&n);
    } while (n>Max || n<1);
    for (int i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %d : ", i+1);
        scanf("%d",&x);
        Push(S,x);
    }
}
 
void Output(Stack S)
{
    for (int i=S.Top-1; i>=0; i--)
        printf("%d   ",S.Data[i]);
    printf("\n");
}
void ClearStack( Stack &S )
{
	while(!Isempty(S))
	{
		Pop(S);
	}
	printf("Complete Clear Stack !!! ");
}
 
int main()
{
	STAKE x;
    Stack S;
    Init(S);
    Isfull(S);
    Push(S,x);
    Peak(S);
    Pop(S);
    Isempty(S);
    Input(S);
    printf("Stack Data:\n");
    Output(S);
    ClearStack(S);
    return 0;
}
