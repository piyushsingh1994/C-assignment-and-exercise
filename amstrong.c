/** Program to print all Amstrong number between 1 to n**/

#include<stdio.h>
#include<math.h>
int main()
{
  int num,lastdigit,digits,sum, end,i;
  printf("Enter upper limit number" );
  scanf("%d", &end );
  for (i = 1; i <=end; i++) {
    sum=0;
    num=i;
    digits=(int)log10(num)+1;
    while (num>0) {
      lastdigit=num%10;
      sum=sum+pow(lastdigit,digits);
      num=num/10;
    }
    if (i==sum) {
    printf("%d,",i );
    }
  }


getch ();
}
