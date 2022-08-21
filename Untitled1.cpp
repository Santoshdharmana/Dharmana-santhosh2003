#include <stdio.h>
int main(){
	int s,i,j;
	for(s=1 ; s<=5 ;s++)
	    {
		  for(i=5 ; i>s ;i++)
		  {
		  	printf("  ");
		  }
		  for(j=i ; j<=5 ; j++)
		  {
		  	printf("* ");
		  }
	    printf(" \n ");
	}
	return 0;
}
