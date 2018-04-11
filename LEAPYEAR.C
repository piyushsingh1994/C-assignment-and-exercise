/* Program to check whether a year is leap or not */
#include<stdio.h>
#include<conio.h>
main()
{
int x;
clrscr();
printf("Enter the year");
scanf("%d",&x);
if (((x%4==0)&&(x%100==0))||(x%400==0))
{
printf("%d is a leap year");
}
else
{
printf("%d is not a leap year");
}
getch();
}