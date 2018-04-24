/** Program to find all factors of a number **/

#include<stdio.h>
#include<math.h>
#include<math.h>
int main() {
int i,num;
printf("Enter any  number" );
scanf("%d",&num );
for ( i = 1; i <=num; i++) {
if (num % i==0) {
printf("%d,", i);
}
}
getch();
}
