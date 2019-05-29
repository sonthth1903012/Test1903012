#include <stdio.h>
int main () {
	int n,d,i;
	d=0;
	printf("Nhap so can kiem tra: \n");
	do{
	scanf("%d",&n);
	}
	while (n<=1);
	for (i=2; i<=n ;i++){ 
	if (n%i==0) d=d+1; }
	
	if (d>=2) printf("0 \n"); 
	else {
	printf("1 \n");}
	
	return 0;
}
