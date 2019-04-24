#include <stdio.h>

int main() {
    int a,b,c,x;
   	 printf("Nhap so a: \n");
   	 scanf("%d",&a); 
   	 printf("Nhap so b: \n");
   	 scanf("%d",&b);
   	 printf("Nhap so c: \n");
   	 scanf("%d",&c);
		if (a+b>c) 
		x = x+1; 
		if (a+c>b)
		x = x+1;
		if (b+c>a) 
		x = x+1;
		if (x==3)
		printf(" a,b,c la 3 canh cua tam giac \n");
		else printf(" a,b,c khong la 3 canh cua tam giac \n"); 
	
}
