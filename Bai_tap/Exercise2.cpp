#include <stdio.h>
int isPrime(int x) 
	{
	int c,d=0;
	if(x<=1) return 0;	
	
	for (int i=2; i<=x ;i++)
	  { 
	    if (x%i==0) 
	    d=d+1; 
	  }
	if (d>=2)
	c=0;  
	else c=1;
    
	return c;
	}
int main () {
	int n,m,x,d,i;
	printf("Nhap so n: ");
    scanf("%d",&n);
	printf("Nhap so m: ");
    scanf("%d",&m);
	
	if (n>m)
	 {
	   x=n;
       n=m;
  	   m=x;
	 }
	
	printf("Cac so nguyen giua %d va %d la: \n",n,m);
      for (int x=n; x<=m;x++)
	   { 
	      if(isPrime(x))
	      printf("%d \n",x);
	   }
	
	return 0;
	
}
