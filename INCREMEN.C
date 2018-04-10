#include<stdio.h>
#include<conio.h>
main()
{
int y,x;
clrscr();
printf("enter the number");
scanf("%d",&y);
x=y++;
printf("%d%d",x,y);
getch();
}
