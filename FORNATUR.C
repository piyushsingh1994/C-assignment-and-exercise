/** Program to print all natural numbers from 1 to n using for loop **/

#include<stdio.h>
#include<conio.h>
main()
{
int i,x;
clrscr();
printf("Enter the number");
scanf("%d",&x);
for (i=1;i<=x;i++)
{
printf("%d\n",i);
}
getch();
return 0 ;
}