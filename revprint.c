/** Program to enter a number and print its reverse **/

#include<stdio.h>
#include<conio.h>
int main()
{
int num,reverse=0;

printf("ENTER THE NUMBER" );
scanf("%d",&num);
while (num !=0) {
  /* code */
  reverse=(reverse*10)+(num%10);
  num/=10;
}
printf("reverse=%d",reverse );



  getch();
}
