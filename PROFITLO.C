/* Program to calculate profit or loss */

#include<stdio.h>
#include<conio.h>
main()
{
int cp,sp,amt;
clrscr();
printf("Input cost price");
scanf("%d",&cp);
printf("Input selling price");
scanf("%d",&sp);
if (sp>cp)
{
 amt=sp-cp;
 printf("profit=%d",amt);
}
else if(cp>sp)
{
amt=cp-sp;
printf("Loss=%d",amt);
}
else
{
printf("Neither profit nor loss");
}
getch();

}