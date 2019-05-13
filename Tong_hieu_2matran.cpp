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
	   int a3[m][n];
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
	    for (j=0;j<n;j++)
     	 {
	      printf("Nhap a2[%d][%d]: ",i,j);
	      scanf("%d",&a2[i][j]);
	     }
       }
	 
        for (i=0;i<m;i++)
	   {
	    for (j=0;j<n;j++)
     	 {
	      a3[i][j]=a[i][j]+a2[i][j];
	     }
       }	 
        
		printf("Tong hai ma tran la: \n" );
	    
		 for (i=0;i<m;i++)
	 {
	    {
	      for (j=0;j<n;j++)
	      printf(" %d",a3[i][j]);
        }
       printf("\n");
     }
     
 
     return 0;
	}

