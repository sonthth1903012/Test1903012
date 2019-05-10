#include <stdio.h>

int main() {
   int a[10];
   int s,x;;
   for (int i=1;i<=10;i++){
   printf("Nhap so thu %d: \n",i);
   scanf("%d",&a[i]);}
   s=0;
   for (int i=1;i<=10;i++) s=s+a[i];
   x=s/10;
   printf("Trung binh cong day so la : %d \n",x);
   

return 0;
}
