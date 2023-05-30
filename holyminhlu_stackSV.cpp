#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"string.h"
typedef struct Student
{
    int SoBD;
    char hoten[300];
    char gioitinh[50];
} Student;
typedef struct Node 
{
    Student data;
    struct Node* pnext;
} Node;
Node* createNode(Student value) 
{
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode -> data = value;
    newNode -> pnext = NULL;
    return newNode;
}
typedef struct 
{
    Node* top;
} Stack;
void Khoi_tao(Stack* S) 
{
    S -> top = NULL;
}
int isEmpty(Stack* S) 
{
    return (S -> top == NULL);
}
void push(Stack* S, Student value) 
{
    Node* newNode = createNode(value);
    newNode -> pnext = S -> top;
    S -> top = newNode;
}
void pop(Stack* S) 
{
    if (!isEmpty(S)) 
	{
        Node* temp = S -> top;
        S -> top = S -> top -> pnext;
        free(temp);
    }
}
Student top(Stack* S) 
{
    if (!isEmpty(S)) 
	{
        return S -> top -> data;
    }
    Student emptyStudent = {0, "", ""};
    return emptyStudent;
}
void input(Stack* S, int n) 
{
    for (int i = 0; i < n; i++) 
	{
        Student newStudent;
        printf("Nhap thong tin sinh vien thu %d: \n", i + 1);
        printf("So bao danh: ");
        fflush(stdin);
        scanf("%d", &(newStudent.SoBD));
        printf("Ho ten: ");
        fflush(stdin);
        gets(newStudent.hoten);
        printf("Gioi tinh: ");
        fflush(stdin);
        gets(newStudent.gioitinh);
        push(S, newStudent);
    }
}
void OutStack(Stack* S) 
{
    if (isEmpty(S)) 
	{
        printf("Stack rong.\n");
        return;
    }
    printf("Cac phan tu trong stack la:\n");
    Node* currentNode = S -> top;
    while (currentNode != NULL) 
	{
        printf("SoBD: %d\t     Ho ten: %s\t     Gioi tinh: %s\t\n", currentNode -> data.SoBD, currentNode -> data.hoten, currentNode -> data.gioitinh);
        currentNode = currentNode -> pnext;
    }
}
void removeAll(Stack* S) 
{
    while (!isEmpty(S)) 
	{
        pop(S);
    }
}

int main() 
{
    Stack S;
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    Khoi_tao(&S);
    input(&S, n);
    OutStack(&S);
    removeAll(&S);
    printf("Complete Clear Stack !!! \n");
    OutStack(&S);
    return 0;
}
