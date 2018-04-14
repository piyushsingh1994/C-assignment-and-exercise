/** Program to find product of its digit of a number **/

#include<stdio.h>
#include<conio.h>
int main()
{
int x,product=1;
printf("ENTER THE NUMBER" );
scanf("%d",&x );
while (x!=0) {
product*=x%10;
x=x/10;
}
printf("product of digits is=%d",product );

  getch();
}
