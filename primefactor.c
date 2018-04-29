/** Program to print prime factor of a number**/

#include<stdio.h>
#include<math.h>
int main()
{
  int num,i,j,isprime;
  printf("enter the number" );
  scanf("%d", &num );
  for ( i = 2; i <=num/2; i++) {
    if (num%i==0) {
    isprime=1;
    for (j = 1; j <=i/2; j++) {
      if (j%i==0) {
      isprime=0;
      break;
      }
    }
    if (isprime==1) {
    printf("%d,",i );
    }
    }
  }


getch();
}
