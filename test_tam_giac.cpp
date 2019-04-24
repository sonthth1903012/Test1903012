#include <stdio.h>

int main() {
	int a,b,c,x,DK;
	printf(" Nhap so a: \n");
	scanf("%d" , &a);
	printf("Nhap so b: \n");
	scanf("%d", &b);
	printf("Nhap so c: \n");
	scanf("%d", &c);
	    DK=10;
		if (a==b && b==c && a==c) DK=0;
		if (a<b) x=a; else x=b;
	    if (c>x) x=c; else x=x;
	    if (x*x==a*a+b*b || x*x==b*b + c*c || x*x== a*a+c*c) DK=1;
	    if (a==b || b==c || c==a) DK=2; 
	if (a+b>c && a+c>b &&  a<b+c && DK==10)
    printf(" %d, %d, %d la ba canh tam giac thuong",a,b,c);
    if (a+b>c && a+c>b &&  a<b+c && DK==1)
    printf (" %d, %d, %d la 3 canh tam giac vuong \n",a,b,c);
    if (a+b>c && a+c>b &&  a<b+c && DK==0)
    printf(" %d, %d, %d la ba canh tam giac deu",a,b,c);
    if (a+b>c && a+c>b &&  a<b+c && DK==2)
    printf(" %d, %d, %d la ba canh tam giac can",a,b,c);
    if (a+b<c || a+c<b ||  a>b+c) printf(" %d, %d, %d khong la ba canh tam giac \n  ",a,b,c);
    return 0;
}
