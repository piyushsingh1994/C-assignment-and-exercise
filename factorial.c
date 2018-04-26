/** Program to print factorial of a number **/

#include<stdio.h>
#include<math.h>
int main()
{
  int num,i, fact=1;
  printf("Enter the number" );
  scanf("%d",&num );
  for (i = 1; i <=num; i++) {
  fact=fact*i;
  }
  printf("%d\n", fact);

  getch();
}
