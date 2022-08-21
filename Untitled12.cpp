#include <stdio.h>
int main(){
	int i,j;
	printf("enter an integer:");
	scanf("%d",&i);
	for(i=1;i<=10;++i)
	for (j=1;j<=i;++j){
		printf("%d * %d = %d \n",i,j,i*j);
	}

}
