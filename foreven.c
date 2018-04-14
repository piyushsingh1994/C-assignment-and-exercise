/** Program to print all even numbers from 1 to n using for loop **/

#include<stdio.h>
#include<conio.h>
int main()
{
  int i,x;
  printf("Enter the number" );
  scanf("%d",&x );
  for (i =1; i <=x; i++) {
    if (i%2==0) {
      printf("%d\n",i );
    }
  }
  getch();

}
