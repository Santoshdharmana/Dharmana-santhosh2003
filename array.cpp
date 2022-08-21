#include <stdio.h>
int main()
{
	int a[2][2],i,j,trans[i][j];
	printf("enter the matrix elements:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
		printf(" matrix elements:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			trans[j][i]=a[i][j];
        }
    }
    	printf("transpose elements:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",trans[i][j]);
		}
		printf("\n");
    }
    return 0;
}

