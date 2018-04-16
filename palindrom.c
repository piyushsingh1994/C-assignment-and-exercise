/** Program to check whether a number is palindrome or not **/

#include<stdio.h>
#include<conio.h>
int main() {

  int n,num,rev=0;
  printf("enter the number" );
  scanf("%d",&n );
  num=n;
  while (n!=0) {
  rev=(rev*10)+(n%10);
  n/=10;
}
  if (rev==num) {
printf("%d is palindrom",num );
  }
  else
  {
    printf("%d is not palindrom",num );
  }

  getch();
  return 0;
}
