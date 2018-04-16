/** Program of menu driven with following options
 1. addition
 2. Odd-Even
 3. printing first n natural numbers
**/

#include<stdio.h>
#include<stdlib.h>
#include<process.h>
int main()
{
int choice,a,b,c;
while (1) {

printf("\n1. Addition");
printf("\n2.odd-even");
printf("\n3.printing n numbers");
printf("\n4.exit");

printf("\n\nenter your choice" );
scanf("%d", &choice);
switch (choice) {
  case 1:
  printf("enter two numbers");
  scanf("%d%d",&a,&b );
  c=a+b;
  printf("addition is=%d",c );
  break;

case 2:
printf("enter a number" );
scanf("%d",&a );
if (a%2==0)
printf("Even number" );

else

  printf("odd number");
  break;


case 3:
printf("enter a number");
scanf("%d",&a );
for (b = 1; b<=a; b++)
printf(" \n %d",b);
break;

case 4:
 exit(0);
 break;

 default:
 printf("invalid input" );
}
getch();
}
}
