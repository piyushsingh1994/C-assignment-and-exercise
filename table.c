/** Program to print multiplication table **/

#include<stdio.h>
#include<conio.h>
int main()
{
  int i,multiple;
  printf("Enter the number");
  scanf("%d",&multiple );
  for (i =1; i <=10; i++) {
     printf("%d*%d=%d\n",multiple,i,(multiple*i) );
  }

getch();
}
