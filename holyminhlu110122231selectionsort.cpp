#include<stdio.h>
#include<iostream>
	int inparr( int a[10000], int n );
	int outarr( int a[10000], int n );
	void Selection_Sort(int a[10000], int n);
//	void Interchange_Sort(int a[10000], int n);
	void Insertion_Sort(int a[10000], int n);
//	void output(int a[10000], int n);
int main()
{
	system(" color 4A ");
//	int x;
	int a[10000];
	int n;
	printf(" Nhap vao so phan tu cho mang: ");
	scanf("%d", &n);
	inparr(a,n);
	outarr(a,n);
	Selection_Sort(a,n);
	printf("\nMang sau khi duoc sap xep ( selection_sort ): ");
     	for(int i=0; i<n; i++)
     		printf("\n\tA[%d] = %d",i,a[i]);
  /*  Interchange_Sort(a,n);
    printf("\nMang sau khi duoc sap xep ( interchangr_sort ): ");
     	for(int i=0; i<n; i++)
     		printf("\n\tA[%d] = %d",i,a[i]); */
    Insertion_Sort(a,n);
    printf("\nMang sau khi duoc sap xep ( insertion_sort ): ");
     	for(int i=0; i<n; i++)
     		printf("\n\tA[%d] = %d",i,a[i]);  
   /* printf("\t\n Nhap vao chuc nang: ");
    printf("\nChon 1 de nhap mang\n");
    printf("\nChon 2 de xuat mang\n");
    printf("\nChon 3 de sap xep mang\n");
    switch(x)
    {
    	case(1):
    		inparr(a,n);
    		break;
    	case(2):
    		outarr(a,n);
			break;
		case(3):
			Selection_Sort(a,n);
			break;
    	exit(0);
    }   */
return 0;
}
int inparr( int a[10000], int n )
{
	for( int i=0; i<n; i++)
	{
		printf("Nhap vao phan tu thu A[%d]:", i);
		scanf("%d", &a[i]);
	}
}
int outarr( int a[10000], int n )
{
	printf("\nMang vua nhap la: ");
	for( int i=0; i<n; i++ )
	{
		printf("\n\tPhan tu thu A[%d] = %d ", i, a[i]);
	}
}
void Selection_Sort(int a[10000], int n)
{
	int min;
	for(int i=0; i< n-1; i++)
	{
		 for(int j=i+1; j<n; j++)
		 {
			if (a[j] < a[i])
			{
 					min=a[i];
 					a[i]=a[j];
 					a[j]=min;
 				
			}
	   	 }
	}
}
/* void Interchange_Sort(int a[10000], int n)
{
	int min;
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
					min=a[i];
 					a[i]=a[j];
 					a[j]=min;
			}
		}
	}
}  */
void Insertion_Sort(int a[10000], int n)
{
   int i, min, j;
   for (i = 1; i < n; i++)
   {
       min = a[i];
       j = i-1;
       while (j >= 0 && a[j] > min)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = min;
   }
}   



	
