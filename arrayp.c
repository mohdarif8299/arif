#include<stdio.h>
int main()
{
	int a[50],i,j,n;
	printf("enter the numbers of elements you want");
	scanf("%d",&n);
	printf("enter the %d elements of array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j<a[i])
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;


}
