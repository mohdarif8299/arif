#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	int prolog[26]={0},i;
		printf("enter the word");
	scanf("%s",name);
	for(i=0;name[i];i++)
	{
		if(name[i]>='A'&&name[i]<='Z')
		{
	prolog[name[i]-'A']++;
		}
	}
	for(i=0;i<26;i++)
	{
		printf("\n%c=%d",i+'A',prolog[i]);
	}
	return 0;
}