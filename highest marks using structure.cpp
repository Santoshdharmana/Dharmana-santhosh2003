#include <stdio.h>
 struct student
{
      int roll;
	  char name[10];
	  int marks;	
}info[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter the %d student roll:",i+1);
		scanf("%d",&info[i].roll);
		printf("enter the %d student name:",i+1);
		scanf("%s",&info[i].name);
		printf("enter the %d student marks:",i+1);
		scanf("%d",&info[i].marks);
	}
	int a;
	for(a=0;a<3;a++)
	{
		printf("\n roll=%d,name=%s,marks=%d",info[a].roll,info[a].name,info[a].marks);
	}
	int max,m;
	max=info[i].marks;
	for(m=0;m<=3;m++)
	{
		if(info[m].marks>max)
		max=info[m].marks;
	}
	printf("\n high marks:%d",max);
}

