#include <stdio.h>
int main (){
   
   int t,i,a;
	printf("Nhap so a: \n");
	scanf("%d",&a);
	i=1;
	do{
	t = a % i;
	if (t==0) printf("%d la uoc cua %d \n",i,a);
	i=i+1;	
	}
	while (i<=a);
	
	return 0;
}
