#include<stdio.h>
#include<conio.h>
main()
{
int x;
clrscr();
printf("enter the number");
scanf("%d",&x);
if(x>0)
{
printf("The number is positive");
}
if(x<0)
{
printf("The number is negative");
}
getch();
}