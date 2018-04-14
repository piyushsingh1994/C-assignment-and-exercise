/** Program to print sum of all even numbers between 1 to n **/

#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter the number");
  scanf("%d",&n );
  for (i =2; i <=n; i+=2) {
    sum+=i;
    }
  printf("Sum of all first %d even numbers is=%d",n,sum );
getch();
}
