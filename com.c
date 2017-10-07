#include<stdio.h>
int main()
{
	int l,i;
    char name[20],name1[20];
	printf("enter a string\n");
	gets(name);
	printf("enter another string\n");
	gets(name1);
	int compare(char name[],char name1[])
	{
		for(i=0;name[i]&&name1[i];i++)
		{
			if(name[i]==name1[i])
			{
			}
			else if(name[i]>name1[i])
			{
				return name[i]-name1[i];
			}
			else
			{
				return name1[i]-name[i];
			}
			return 0;
		}
	}
	
	if(compare(name,name1)==0)
	{
	printf("both string are same");
	}
	else
	{
		printf("string are not equal");
	}
	return 0;
}