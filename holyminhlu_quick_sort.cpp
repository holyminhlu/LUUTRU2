// HO LY MINH LU-110122231 QUICK SORT //
#include"stdio.h"
#include"iostream"
#define arr 1000
 	void intput( int *a, int n );
	void output(int *a, int n );
	void swap(int &a, int &b);
	int partition(int *a, int low, int hight);
	void Quick_Sort(int *a, int low, int high);
int main(void)
{
	int a[arr];
	int n;
	printf("\nSo luong phan tu: ");
	scanf("%d", &n);
	intput(a,n);
	printf("\nMang vua nhap la: ");
	output(a,n);
	printf("\nAfter sorting: Quick Sort");
	Quick_Sort(a,0,n-1);
	output(a,n);
return 0;
}
void intput( int *a, int n )
{
	for( int i=0; i<n; i++)
	{
		printf("Phan tu thu A[%d]:", i);
		scanf("%d", &a[i]);
	}
}
void output( int *a, int n )
{
	for( int i=0; i<n; i++ )
	{
		printf("\n\tPhan tu thu A[%d] = %d ", i, a[i]);
	}
}
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int partition(int *a, int low, int high)
{
    int pivot = a[high];  
    int left = low;
    int right = high - 1;
    while(true)
	{
        while(left <= right && a[left] < pivot) 
			left++;
        while(right >= left && a[right] > pivot) 
			right--;
        if (left >= right)
		break;
        swap(a[left], a[right]);
        left++;
        right--;
    }
    swap(a[left], a[high]);
    return left;
}
void Quick_Sort(int *a, int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        Quick_Sort(a, low, pi - 1);
        Quick_Sort(a, pi + 1, high);
    }
}
