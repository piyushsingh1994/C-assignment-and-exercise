/** Program to find product of its digit of a number **/

#include<stdio.h>
#include<conio.h>
int main()
{
int x;
long long product=1ll;
printf("ENTER THE NUMBER" );
scanf("%d",&x );
while (x!=0) {
product=product*(x%10);
x=x/10;
}
printf("product of digits is=%lld",product );

  getch();
}
