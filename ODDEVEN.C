/*Program to check whether a number is odd or even */

#include<stdio.h>
#include<conio.h>
main()
{
int x;
clrscr();
printf("enter a number");
scanf("%d",&x);
if(x%2==0)
{
 printf("The number is even");
}
else
{
 printf("The number is odd");
}
getch();
}