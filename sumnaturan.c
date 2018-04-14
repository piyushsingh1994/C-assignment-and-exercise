/** Program to print sum of all natural numbers between 1 to n **/

#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter the number");
  scanf("%d",&n );
  for (i =1; i <=n; i++) {
    sum+= i;


  }
  printf("Sum of all first %d natural numbers is=%d",n,sum );
getch();
}
