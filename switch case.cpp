
#include <stdio.h> 
int main()
{
	int ch;
	int a,b,c;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("enter the choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : c=a+b;
		printf("%d",c);
		break;
		case 2 : c=a-b;
		printf("%d",c);
		break;
		case 3 : c=a*b;
		printf("%d",c);
		break;
	}
}
