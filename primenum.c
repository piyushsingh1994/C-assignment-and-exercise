/** Program to check whether a number is prime or not **/

#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,isprime;
  isprime=1;
  printf("enter a number" );
  scanf("%d",&n );
  for (i = 2; i <=n/2; i++) {
   if (n%i==0) {
  isprime=0;
     break;
   }
 }
   if (isprime==1) {
     printf("%d is prime",n );
   }
   else {
        printf("%d is comosite number",n );
   }
 getch();
}
