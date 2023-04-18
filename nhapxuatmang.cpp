#include<stdio.h>
#include<stdlib.h>
#include<iostream>
 	int xuatmang( int a[10000], int n);
 	int nhapmang( int a[10000], int n);
 	//	int insertionsort( int a[10000], int n);
 	//	void sorted(int a[10000], int n);
 	int timkiem(int a[10000], int n, int tk);
    //	void thuchientimkiem(int a[10000], int n);
 	
 int main()
 {
 	system(" color 70 ");
 	int a[10000];
	int n, tk;
	 printf("Nhap vao so luong phan tu: ");
	 scanf("%d",&n);
	 nhapmang(a,n);
	 xuatmang(a,n);
	//  printf("\nMang sau khi da sap xep (insertion sort): ");
	//  insertionsort(a,n);
	//  sorted(a,n);
    //	printf("\nNhap vao gia tri can tim: ");
    //	scanf("%d", &tk);
	printf("\nNhap vao gia tri can tim: ");
	scanf("%d", &tk);
	int kq = timkiem(a, n, tk);
	if(kq==-1)
	{
		printf("\n Khong tim thay!");
	}
	else
	{
		printf("\n Tim thay gia tri %d tai a[%d] !", tk,kq );
	}	
	//timkiem(a,n,tk);
	 return 0;
 }
 
int nhapmang( int a[10000], int n)
 {
 	for( int i=0; i<n; i++)
 	{
 		printf("\n\tNhap vao phan tu thu A[%d]: ",i);
 		scanf("%d", &a[i]);
 	}
 }
 int xuatmang( int a[10000] , int n)
 
{
	printf("Phan tu cua mang la: ");
	for( int i=0; i<n; i++)
	{
		printf("\n\n A[%d]=%d", i, a[i]);
	}
}
/* int insertionsort( int a[10000], int n)

 {
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = a[i];
       j = i-1;
       while (j >= 0 && a[j] > key)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = key;
   }
}
void sorted(int a[10000], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("\t%d ", a[i]);
   printf("\n\t");
}
 
 	*/
int timkiem(int a[10000], int n, int tk)
{
	for(int i=0; i<n; i++)
	{
		if(a[i]==tk)
		{
			return i;
		}
	}
	return -1;
}
/* void thuchientimkiem(int a[10000], int n)  

{
	int tk;
	printf("\nNhap vao gia tri can tim: ");
	scanf("%d", &tk);
	int kq = timkiem(a, n, tk);
	if(kq==1)
	{
		printf("\n Tim thay gia tri %d tai a[%d] !", tk, a[i] );
	}
	else
	{
		printf("\n Khong tim thay!");
	}	
}	*/
