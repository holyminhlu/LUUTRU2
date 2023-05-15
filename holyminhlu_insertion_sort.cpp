	// HO LY MINH LU-110122231 INSERTION SORT //
#include"stdio.h"
#include"conio.h"
#define arr 1000
 void intput( int *a, int n );
 void output( int *a, int n );
 void Insertion_sort( int *a, int n );
int main()
{
	int a[arr];
	int n;
	printf("So luong phan tu: ");
	scanf("%d", &n);
	intput(a,n);
	output(a,n);
	Insertion_sort(a,n);
	printf("\nAfter sorting: ");
	output(a,n);
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
void Insertion_sort( int *a, int n )
{
	for( int i=0; i<n; i++)
	{
		int temp = a[i];
		int j=i-1;
		while ( j>=0 && a[j]>temp )
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
}
