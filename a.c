#include<stdio.h>
int main()
{
	char str[20];
	int i,count[30]={0};
	printf("enter a string\n");
    gets(str);
	for(i=0;str[i];i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{ 
         count[str[i]-'A']++;
		}
	}
	for(i=0;i<=26;i++)
	{
		
		if(str[i]>=0)

			printf("\n%c=%d",i+'A',count[i]);
	}
	return 0;
}