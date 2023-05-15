// HO LY MINH LU-110122231 BUBBLE SORT //
#include"stdio.h"
#include"conio.h"
#define arr 1000
 void intput( int *a, int n );
 void output( int *a, int n );
 void Bubble_sort( int *a, int n );
int main()
{
	int a[arr];
	int n;
	printf("So luong phan tu: ");
	scanf("%d", &n);
	intput(a,n);
	printf("\nMang vua nhap:");
	output(a,n);
	Bubble_sort(a,n);
	printf("\nAfter sorting: ");
	output(a,n);
	getch();
return 0;
}
void intput( int *a, int n )
{
	for( int i=0; i<n; i++)
	{
		printf("Phan tu thu: A[%d]", i);
		scanf("%d", &a[i]);
	}
}
void output( int *a, int n )
{
	for( int i=0; i<n; i++)
	{
		printf("\n A[%d] : %d ", i, a[i]);
	}
}
void Bubble_sort( int *a, int n )
{
	for( int i=0; i<n-1; i++)
	{
		for( int j=n-1; j>=i; j--)
		{
			if( a[j] < a[j-1])
			{
				int temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
		}
	}
}
