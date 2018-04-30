/** Program to check whether a number is perfect number or not**/

#include<stdio.h>
#include<math.h>
int main()
{
  int num , sum=0,i;
  printf("Enter a number");
  scanf("%d", &num );
  for (i = 1; i <=num/2; i++) {
    if (num%i==0) {
    sum+=i;
    }
  }
  if (sum==num) {
    printf("%d is PERFECT Number",num );
  }
  else {
        printf("%d is not PERFECT Number",num );
  }




getch();
}
