/** Program to print  all perfect numbers between 1 to n **/

#include<stdio.h>
#include<math.h>
int main()
{
  int end,i,j,sum=0;
  printf("Enter a number");
  scanf("%d", &end);
  for (i = 1; i <=end; i++) {
    sum=0;
    for (j = 1; j <i; j++) {
      if (i%j==0) {
      sum+=j;
      }
    }
    if (sum==i) {
printf("%d,",i );
    }


  }



getch();
}
