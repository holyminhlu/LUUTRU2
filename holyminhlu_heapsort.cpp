// HO LY MINH LU, BAI THUC HANH HEAP_SORT.
#include"stdio.h"
#include"iostream"
#define arr 1000
	void heapify( int* a , int n , int i );
	void heapsort( int* a , int n );
	void intput( int* a , int n );
	void output( int* a , int n );
//////////////////////////////////////////
int main()
{
	printf("\n\t\tHO LY MINH LU, BAI THUC HANH HEAP_SORT !!! ");
	system( " color 70 ");
    int a[arr];
    int n;
    printf("\nSo luong phan tu: ");
	scanf("%d", &n);
    intput(a,n);
    printf("\nArray before sorting:\n");
    output(a,n);
    heapsort(a,n);
    printf("\n\nArray after sorting:\n");
    output(a,n);
return 0;
}
void intput( int* a, int n )
{
	for( int i=0; i<n; i++)
	{
		printf("Phan tu thu A[%d]:", i);
		scanf("%d", &a[i]);
	}
}
void output( int* a, int n )
{
	for( int i=0; i<n; i++ )
	{
		printf("\n\tPhan tu thu A[%d] = %d ", i, a[i]);
	}
}
void heapsort(int* a, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = a[i];
        a[i] = a[0];
        a[0] = temp;
        heapify(a, i, 0);
    }
}
void heapify(int* a, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right  = 2 * i + 2;
    if (left < n && a[left] > a[largest])
    {
        largest = left;
    }
    if (right < n && a[right] > a[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a, n, largest);
    }
}


