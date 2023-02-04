#include<stdio.h>
#include<string.h>
#include<conio.h>
long tinhgiaithua(int n)
{
	if(n>0)
	{
		return n * tinhgiaithua(n-1);
	}else
	{
		return 1;
	}
}
int main()
{
	int n;
	printf("\n Nhap so nguyen duong n: ");
	scanf("%d",&n);
	printf("\n\t Giai thua cua %d la %d \n",n,tinhgiaithua(n));
}
