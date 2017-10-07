#include<stdio.h>
int main()
{
	int  marks[30],i,f,x;
    char name[5][30];
	printf("enter name  of five students");
	for(i=0;i<5;i++)
	{
		scanf("%s",name[i]);
	}
	printf("\nenter marks");
     for(i=0;i<5;i++)
	{
	 scanf("%d",&marks[i]);
	}
	f=marks[0];
	for(i=0;i<5;i++)
	{
		if(f<marks[i])
		{
	           f=marks[i];
			   x=i;
	    }
	}
	printf(" the name of topper is %s",name[x]);
		
	return 0;
}