#include<stdio.h>
#include<string.h>
int main()
{
	char name[30];
	int i,c=0,l,x;
	printf("enter a string\n");
	scanf("%[^\n]",name);
	l=strlen(name);
	for(i=0;i<l;i++)
	{
		if(name[i]==' ')
		{
			c++;
		}
    }

	x=l+c*2;
	name[x]='\0';
	 for(i=l-1;i>=0;i--)
	
	{
		if(name[i]==' ')
		{
			name[x-1]='0';
			name[x-2]='2';
			name[x-3]='%';
			x=x-3;
		}
		else
		{
			name[x-1]=name[i];
			x=x-1;
		}
	}
	puts(name);
	return 0;
}

