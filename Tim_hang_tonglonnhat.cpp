#include <stdio.h>
int main() {
     int  max,m,n,i,j,d=0;
     do
     {
	 printf("Nhap so hang:");
	 scanf("%d",&m);
	 printf("Nhap so cot:");
	 scanf("%d",&n);
	 }
	 while (m<=0 || n<=0);
  	
	   int a [m][n];
	   int a2[m][n]; 
		
		for (i=0;i<m;i++)
	   {
	    for (j=0;j<n;j++)
     	 {
	      printf("Nhap a[%d][%d]: ",i,j);
	      scanf("%d",&a[i][j]);
	     }
       }
	 
	 for (i=0;i<m;i++)
	 {
	    {
	      for (j=0;j<n;j++)
	      printf(" %d",a[i][j]);
        }
       printf("\n");
     }
     int t=0,vt=0;
     max=0;
     for (i=0;i<m;i++)
     {
     for (j=0;j<m;j++)
	 {	
	 t=t+a[i][j];	
     }
	 if (t>max) 
	 {max=t; vt=i;}	
	 }
     printf("Hang lon nhat la hang: %d, co tong la: %d",vt,max);
 

	 return 0;
	}

