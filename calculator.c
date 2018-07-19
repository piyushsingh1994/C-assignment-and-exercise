/** Calculator using switch  statement**/


#include<stdio.h>
#include<conio.h>
main(){

  char operator;
  double firstnumber,secondnumber;

  printf("Enter an operator (+,-,*,/): ");
  scanf("%c",&operator );

  printf("Enter the two operands:");
  scanf("%lf %lf",&firstnumber, &secondnumber );

  switch (operator) {
    case '+':
    printf("%lf+%lf=%lf",firstnumber,secondnumber,firstnumber+secondnumber );
    break;

    case '-':
    printf("%lf-%lf=%lf",firstnumber,secondnumber,firstnumber-secondnumber );
    break;

    case '*':
    printf("%lf*%lf=%lf",firstnumber,secondnumber,firstnumber*secondnumber );
    break;

    case '/':
    printf("%lf/%lf=%lf",firstnumber,secondnumber,firstnumber/secondnumber );
    break;

    default:
    printf("Operator is not correct" );
  }
  getch();
}
