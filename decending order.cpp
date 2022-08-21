#include <Stdio.h>
int main()
{
	int a[5],i,j,temp;
	printf("enter the array elements :");
	{
		for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(a[i]<a[j])
				{
				    a[i]=temp;
					a[j]=a[i];
					temp=a[j];
				}
				
			}
		}
	}
	printf("array elements :");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
