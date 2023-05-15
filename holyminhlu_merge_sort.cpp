	// HO LY MINH LU-110122231 SELECTION SORT //
#include"stdio.h"
#include"conio.h"
#include"math.h"
#define arr 1000
 void intput( int *a, int n );
 void output( int *a, int n );
 void Merge_sort( int *a, int left, int mid, int right );
 void Merge(int *a, int left, int mid, int right);
int main(void)
{
	int a[arr];
	int n;
	printf("So luong phan tu: ");
	scanf("%d", &n);
	intput(a,n);
	output(a,n);
	 int a_size = sizeof(a)/sizeof(a[0]);
    Merge_sort(a, 0, a_size - 1);
	printf("\nAfter sorting: ");
	output(a,n);
return 0;
}
void intput( int *a, int n )
{
	for( int i=0; i<n; i++)
	{
		printf("\nPhan tu thu: A[%d]", i);
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
void Merge(int *a, int left, int mid, int right )
{
    int i, j, k;
    int a1 = mid - left + 1;
    int a2 = right - mid;
    int L[a1], R[a2];
    for (i = 0; i < a1; i++)
        L[i] = a[left + i];
    for (j = 0; j < a2; j++)
        R[j] = a[mid + 1+ j];
    i = 0; 
    j = 0; 
    k = left; 
    while (i < a1 && j < a2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < a1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
 
    while (j < a2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
void Merge_sort( int *a, int left, int mid, int right )
{
    if (left < right)
    {
        int mid = left+(right-left)/2;
        Merge_sort(a, left, mid);
        Merge_sort(a, mid+1, right);
        Merge(*a, left, mid, right);
    }
}
