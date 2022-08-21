#include <stdio.h>
int main()
{
	int a ,temp,reverse;
	printf("enter the number:");
	scanf("%d",&a);
	temp=a;
	reverse=0;
	while(a!=0)
	{
		reverse=reverse*10+a%10;
		a=a/10;
	}
	if(temp==reverse)
	    printf("number is palindrome");
	else
	    printf("not a palindrome");
}
