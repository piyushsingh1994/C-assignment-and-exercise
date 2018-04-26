/** Program to find HCF of two numbers **/

#include<stdio.h>
#include<math.h>
int main()
{
  int num1,num2, hcf=1,c;
  printf("enter first number" );
  scanf("%d",&num1 );
    printf("enter second number" );
    scanf("%d",&num2 );

    if(num1<num2){
      c=num1;
      num1=num2;
      num2=c;
    }
    while(num1%num2!=0){
      c=num2;
      num2=num1%num2;
      num1=c;
    }
    printf("\n%d",num2);


getch();
}
