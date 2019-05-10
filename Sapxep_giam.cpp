#include <stdio.h>

int main() {
   int a[10];
   int x,i,j,k;;
   printf("Nhap so thu 1: \n");
   scanf("%d",&a[1]);
   for (i=2;i<=10;i++){
   printf("Nhap so thu %d: \n",i);
   scanf("%d",&a[i]);
   for (j=1;j<i;j++) 
   {
   	if (a[j]==a[i]) 
	   {printf("Nhap lai \n"); i=i-1;}
   }
   }
       for (j=2;j<11;j++) 
{
    i= j - 1;
    x=a[j];
    while ( (i>=0) && (x<a[i]) )
	{
    	a[i+1]=a[i];
    	i=i-1;
	} 
	a[i+1]=x; 
}
    printf("Day so:");
	for (int k=1;k<11;k++)
	printf(" %d",a[k]);
   

return 0;
}
