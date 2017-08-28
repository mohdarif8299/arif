#include<stdio.h>
int main()
{
	int a[5][5],i,j,s=0,m=0,n=0,x=-1;
	printf("enter the 5x5 elements");
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n the matrix is\n");
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("[%d]",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=4;i++)
	{

	}
	return 0;
}
