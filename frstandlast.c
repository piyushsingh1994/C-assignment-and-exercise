/** Program to print sum of all natural numbers between 1 to n **/

#include<stdio.h>
#include<conio.h>
int main()
{

  int num,sum=0,first,last;
  printf("enter the number" );
  scanf("%d",&num );
  last=num%10;
  first=num;
  while (num >=10) {

  num =num/10;
  }
  first=num;
  sum=first+last;
  printf("sum offirst and last digit of no is=%d",sum );

getch();
}
