#include <stdio.h>
#include <string.h>
int main(){
	char a[20],b[7];
	printf("enter the string1:");
	scanf("%s",a);
     printf("enter the string2");
     scanf("%s",b);
     
	strcat(a,b);
	printf(a);
	return 0;
}
