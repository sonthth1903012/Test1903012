#include <stdio.h>
int main (){
   
   int t,i,a,d;
	printf("Nhap so a: \n");
	scanf("%d",&a);
	i=1;
	d=0;
	do{
	t = a % i;
	if (t==0) d=d+1;
	i=i+1;	
	}
	while (i<=a);
	if (d<=2) printf("%d la so nguyen to",a); else
	printf("%d khong la so nguyen to",a);
	
	return 0;
}
