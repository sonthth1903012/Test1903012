#include <stdio.h>

int main() {
   int a[10];
   int x,y;
   for (int i=1;i<10;i++){
   printf("Nhap so thu %d: ",i);
   scanf("%d",&a[i]);
   }
   x=a[1];
   for (int i=1;i<10;i++)
{
	
	if (a[i]>x)
	x=a[i];
}
    y=a[1];
	for (int z=1;z<=10;z++)
{
	if (a[z]<y)
	y=a[z];
}
   printf("So lon nhat la: %d \n",x);
   printf("So nho nhat la: %d \n",y);
   
return 0;

}
