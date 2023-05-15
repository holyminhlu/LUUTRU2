	// HO LY MINH LU-110122231 INTERCHANGE SORT //
#include"stdio.h"
#include"conio.h"
#define arr 1000
 void intput( int *a, int n );
 void output( int *a, int n );
 void Interchange_sort( int *a, int n );
int main()
{
	int a[arr];
	int n;
	printf("So luong phan tu: ");
	scanf("%d", &n);
	intput(a,n);
	output(a,n);
	Interchange_sort(a,n);
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
void Interchange_sort( int *a, int n )
{
	for( int i=0; i< n-1; i++)
	{
		for( int j=i+1; j<n; j++)
		{
			if( a[i]>a[j])
			{
				int temp = a[i];
				a[i]= a[j];
				a[j]= temp;
			}
		}
	}
}
