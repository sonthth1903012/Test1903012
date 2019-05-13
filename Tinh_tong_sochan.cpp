#include <stdio.h>
 int main() {

    int a,b;
   printf("Nhap so thu 1 \n");
   scanf("%d",&a);
   printf("Nhap so thu 2 \n");
   scanf("%d",&b);  
   int s;
   for (int i=a;i<=b;i++)
   {if (i%2==0) s=s+i;} 
   printf("Tong cac so chan tu %d den %d la: %d",a,b,s);
   return 0;
}
