/** Program to find power of a number using for loop **/

#include<stdio.h>
#include<stdlib.h>
#include<process.h>
int main()
{
int base,exponent;
long long power=1;
int i;
printf("Enter a base");
scanf("%d",&base);
printf("Enter a exponent");
scanf("%d",&exponent);
for (i = 1; i <=exponent; i++) {
  power=power*base;
}
printf("%d^%d=%lld",base,exponent,power );
getch();

}
