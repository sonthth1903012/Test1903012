#include <stdio.h>

main () {
	int a,b,c,x;
	printf("Nhap vao so a: \n");
	scanf("%d",&a);	
	printf("Nhap vao so b: \n");
	scanf("%d",&b);
	printf("Nhap vao so c: \n");
	scanf("%d",&c);
	if (a>b) 
	x = a;
	else x = b;
	if (c>x) 
	x = c;
	printf ("So lon nhat la %d \n",x);

}
