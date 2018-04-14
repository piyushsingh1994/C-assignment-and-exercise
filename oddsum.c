/** Program to print sum of all odd numbers between 1 to n **/

#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter the number");
  scanf("%d",&n );
  for (i =1; i <=n; i+=2) {
    sum+= i;


  }
  printf("Sum of all first %d odd numbers is=%d",n,sum );
getch();
}
