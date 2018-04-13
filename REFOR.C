/** Program to print all natural numbers in reverse from n to 1 using for loop **/

#include<stdio.h>
#include<conio.h>
main()
{
int i,x;
clrscr();
printf("enter the number");
scanf("%d",&x);
for (i=x;i>=1;i--)
{
 printf("%d\n",i);
}
getch();


}