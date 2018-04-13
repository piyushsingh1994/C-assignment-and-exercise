/** Program to print all natural numbers from 1 to n using while loop **/

#include<stdio.h>
#include<conio.h>
main()
{
int i, x;
clrscr();
printf("enter the number");
scanf("%d",&x);
i=1;
while (i<=x)
{
 printf("%d\n",i);
 i++;
}
getch();


}