#include <stdio.h>
int main()
{
	int mat[3][3],i,j,transpose[i][j];
	printf("enter the matrix elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf(" matrix elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			transpose[j][i]=mat[i][j];
		}
		
	}
	printf("transpose elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",transpose[i][j]);
		}
		printf("\n");
	
    }
    return 0;
}
