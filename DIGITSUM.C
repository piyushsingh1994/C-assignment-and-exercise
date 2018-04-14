/** Program to find sum of its digit of a number **/

#include<stdio.h>
#include<conio.h>
int main()
{
int x,sum=0;
printf("ENTER THE NUMBER" );
scanf("%d",&x );
while (x!=0) {
sum+=x%10;
x=x/10;
}
printf("Sum of digits is=%d",sum );

  getch();
}
