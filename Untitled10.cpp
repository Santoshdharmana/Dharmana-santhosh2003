#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	 {
	 	printf("the greatest number %d",a);
	 }
   else if(b>c && b>a)
     {
     	printf("the greatest number %d",b);
	 }
	 else {
	 	printf("%d is greater",c);
	 }
}
