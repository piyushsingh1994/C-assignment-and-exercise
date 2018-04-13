/** Program to print all natural numbers in reverse from n to 1 using while loop **/

#include<stdio.h>
#include<conio.h>
main()
{
int i;
clrscr();
printf("enter the number");
scanf("%d",&i);
while (i>=1)
{
 printf("%d\n",i);
 i--;
}
getch();


}