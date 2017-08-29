#include<stdio.h>
int main()
{
	int a[10][10]={0},b[10][10],c[10][10],i,j,k,m,n;
	printf("enter the size of array");
	scanf("%d",&m);

	printf("enter the %d elements of 1 matrix",m*m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("enter the elements of 2 matrix",m*m);
	for(i=0;i<m;i++)
	{
	for(j=0;j<m;j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	printf("\nthe first matrix is:\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("[%d]",b[i][j]);
		}
		printf("\n");
	}
	printf("\n the second matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("[%d]",c[i][j]);
		}
		printf("\n");
	}
	printf("\n the multiplication of two matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<m;k++)
			{
				a[i][j]=a[i][j]+b[i][k]*c[k][j];
			}

		}
		
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			
				printf("[%d]",a[i][j]);
						

			}
			
		printf("\n");
	}	return 0;
}

