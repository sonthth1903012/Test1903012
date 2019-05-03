#include <stdio.h>
int main () {
	int s,a,i;
	a=2;
	s=0;
	do{
	
	a=a+2;
	s=s+a;
	i=i+1; 	}
	while (i<=100);
	printf("Tong 100 so le dau tien la %d",s);
	
	
	return 0;
	
}
