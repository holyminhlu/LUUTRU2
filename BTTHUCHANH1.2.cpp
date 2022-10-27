#include<stdio.h>
 int main()
 { int c,n, fact=1;
   printf("\n NHAP n:");
   scanf("%d", &n);
   for ( c=1 ; c<=n ; c++ )
   fact=fact*c;
   printf("\n Giai thua cua %d = %d\n" , n , fact);
return 0;  
 }
  
