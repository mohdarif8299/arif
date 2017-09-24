#include<stdio.h>
int main()
{
	char name[30];
	int i,c=1;
	printf("enter a string");
	gets(name);
	for(i=0;i<name[i];i++)
	{
		if(name[i]==' ')
		{
			c++;
		}
		c=c*3;
	}
	for(i=name[i];name[i+c];i--)
	{
		name[i+c]=name[i];
		if(name[i]==' ')
		{
			name[i]='0';
			name[i-1]='2';
			name[i-2]='%';
		}
	}
	printf("%s",name);
return 0;
}