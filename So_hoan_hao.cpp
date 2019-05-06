#include <stdio.h>

int main() {
	int n,i,j,t;
    printf("Nhap so n \n");
	scanf("%d",&n);
    i=1;
    j=0;
	do{
	t = n % i;
	if (t==0) j=j+i;
	i=i+1;	
	}
	while (i<n);
	if (n==j) 	
    printf("%d la so hoan hao \n",n);
	else printf("%d khong la so hoan hao \n",n) ;
	return 0;
	
}
