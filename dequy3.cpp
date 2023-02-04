#include<stdio.h>
#include<string.h>
#include<conio.h>
int tongn(int n);
int main()
{
	int i,n,tinhtongn;
	printf("\n Nhap mot so nguyen duong: ");
	scanf("%d",&n);
	tinhtongn = tongn(n);
	printf("\n\t Tong cac so tu 1 den %d la: %d",n,tinhtongn);
	return 0;
}
int tongn(int n)
{
	int tinhtong;
	if(n==1)
	{
		return(1);
	}else
	{
		tinhtong=n+tongn(n-1);
	}
	return(tinhtong);
}
