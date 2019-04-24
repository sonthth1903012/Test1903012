#include <stdio.h>
int main () {
	int a;
	printf("Nhap vao so a: \n");
	scanf("%d",&a);
	if (a==2) printf(" Hom nay la thu 2 \n");
	  if (a==3) printf(" Hom nay la thu 3 \n");
	  if (a==4) printf(" Hom nay la thu 4 \n");
	  if (a==5) printf(" Hom nay la thu 5 \n");
	  if (a==6) printf(" Hom nay la thu 6 \n");
	  if (a==7) printf(" Hom nay la thu 7 \n");
  	  if (a==8) printf(" Hom nay la chu nhat \n");
	  if (a<2 || a>8) printf("Nhap sai \n");
	  return 0;
}
