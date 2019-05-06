#include <stdio.h>

int main() {
	double a,b,c,i,j;
    a=1;
    b=2;
   for (j=1; j<99;j++) 
   	{   c=a+b;
   		a=b;
   		b=c;
	}
   printf("So thu 100 la:  %lf \n",c);
	
	return 0;
	
}
