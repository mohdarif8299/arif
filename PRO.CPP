#include<stdio.h>
#include<conio.h>
int main()
{
char name[20],num[10],type[20],number[]={"12345678"},pass[]={"PROLOG"};
int i;
abc:
clrscr();
gotoxy(31,6);
//textcolor(RED);
printf("BANK");
gotoxy(30,9);
//textcolor(GREEN);
printf("1-OPEN ACCOUNT");
gotoxy(30,10);
//textcolor(YELLOW);
printf("2-DEPOSIT");
gotoxy(30,11);
//textcolor(BLUE);
printf("3-WITHDRWAWL");
gotoxy(30,12);
//textcolor(BROWN);
printf("4-UPDATE");
gotoxy(30,13);
//textcolor(WHITE);
printf("5-DELETE ACCOUNT");
gotoxy(30,14);
//textcolor(RED);
printf("6-EXIT");
for(i=0;i<6;i++)
{
if(119==getch())
{
gotoxy(30,14-i);
}

if(13==getch())
{
clrscr();
gotoxy(30,9);
//textcolor(GREEN);
printf("ENTER YOUR NAME :- ");
gets(name);
gotoxy(30,13);
//textcolor(BLUE);
printf("SELECT ACCOUNT TYPE :- " );
gotoxy(33,15);
//textcolor(BROWN);
printf("1-SAVING");
gotoxy(33,17);
//textcolor(BLUE);
printf("2-CURRENT");
if(119==getch())
{
gotoxy(33,15);
}
if(13==getch())
{
gotoxy(33,15);
textcolor(BLUE);
cprintf("1-SAVING");
}
if(13==getch())
{
 gotoxy(33,17);
textcolor(BLUE);
cprintf("2-CURRENT");
 }
gotoxy(30,19);
//textcolor(BROWN);
printf("ENTER PHONE NUMBER :- ");
scanf("%s",num);
   clrscr();
if(13==getch())
{
clrscr();
gotoxy(30,9);
//textcolor(BLUE);
printf("ACCOUNT NUMBER IS :- %s ",number);
gotoxy(30,14);
//textcolor(YELLOW);
printf("PASSWORD IS :- %s ",pass);
}
}
}
getch();
return 0;
}