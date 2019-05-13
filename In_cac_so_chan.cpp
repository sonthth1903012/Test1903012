#include <stdio.h>
 int main() {

    int a,b;
   printf("Nhap so thu 1 \n");
   scanf("%d",&a);
   printf("Nhap so thu 2 \n");
   scanf("%d",&b);  
   printf("Cac so chan tu %d den %d la: ",a,b);
   for (int i=a;i<=b;i++)
   {if (i%2==0) printf(" %d",i);} 
   return 0;
}
