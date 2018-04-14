/** Program to count number of digits in an integer **/

#include<stdio.h>
#include<conio.h>
int main()
{
  long long num;
  int count=0;
  printf("enter the number" );
  scanf("%lld",&num );
  while (num !=0) {
  count++;
  num /=10;
  }
  printf("Total digits: %d",count );

getch();
}
