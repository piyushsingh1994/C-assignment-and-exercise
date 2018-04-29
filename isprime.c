/** Program to print all prime numbers between 1 to n **/

#include<stdio.h>
#include<math.h>
int main()
{
int lowernum,uppernum,i,isprime;
printf("all prime number between 1 to : " );
scanf("%d", &uppernum);
printf("All prime no between 1 to %d are", uppernum);


for ( i = 2; i <=uppernum; i++) {
  isprime=1;

for ( lowernum= 2; lowernum <= i/2; lowernum++) {
  if (i%lowernum==0) {
    isprime=0;
    break;
  }
}
if (isprime==1) {
  printf("%d,",i );
}

}



getch();
}
