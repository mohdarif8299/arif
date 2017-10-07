#include<stdio.h>
int main()
{
  char dest[25],source[25];
  int i,j;
  printf("\nEnter First String:");
  gets(dest);
  printf("\nEnter Second String:");
  gets(source);
  
  for(i=0;dest[i];i++);
	  for(j=0;source[j];j++)
	{
       dest[i]=source[j];
	   i++;
	}
  dest[i]='\0';
  printf("\nString is %s",dest);
}