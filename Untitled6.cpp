#include <stdio.h>
#include <string.h>
int main()
{
	char a[20],b[7];
	printf("enter the string1:");
	scanf("%s",a);
	printf("enter the string2:");
	scanf("%s",b);
	if (strcmp(a,b)==0)
	    printf("both are equal");
	else
	    printf("both are not equal");

	return 0;
}
