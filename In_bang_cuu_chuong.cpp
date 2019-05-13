#include <stdio.h>
 int main() {
     int a[20],s;
	 for ( int i=1;i<=20;i++)
     {
	 printf("Nhap so thu %d: ",i);
	 scanf("%d",&a[i]);	 
     }
     s=0;
     for (int i=1;i<=20;i++)
	 s=s+a[i];
	 printf("Tong 20 so la %d",s);
   return 0;
}
