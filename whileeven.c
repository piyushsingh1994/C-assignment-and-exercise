/** Program to print all even numbers from 1 to n using while loop **/

#include<stdio.h>
#include<conio.h>
int main()
{
  int i,x;
  printf("Enter the number");
  scanf("%d", &x);
  i=1;
 while (i<=x)
  {

   if (i%2==0)
    {

     printf("%d\n",i );
   }
   i++;
 }
 getch();
}
