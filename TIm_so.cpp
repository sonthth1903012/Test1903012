#include <stdio.h>

int main() {
   int a[10];
   int d,s,x;;
   for (int i=1;i<=10;i++){
   printf("Nhap so thu %d: \n",i);
   scanf("%d",&a[i]);}
   printf("Nhap so can tim: \n");
   scanf("%d",&s);
   d=0;
   for (int i=1;i<=10;i++) 
   {if (s==a[i]) d=d+1;}
   if (d<=0) printf("So %d khong xuat hien trong day so",s);
   else printf(" So %d xuat hien %d lan \n",s,d);
   
   

return 0;
}
