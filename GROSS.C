/* Program to calculate gross salary of an employee  */

#include<stdio.h>
#include<conio.h>
main()
{
float salary,gross,HRA,DA;
clrscr();
printf("Enter Basic salary");
scanf("%f",&salary);
if (salary<=10000)
{
HRA=salary* 0.2;
DA=salary* 0.8;
gross=salary+HRA+DA;
printf("gross salary=%2f",gross);
}
else if(salary<=20000)
{
HRA=salary*.25;
DA=salary*.9;
gross=salary+HRA+DA;
printf("gross salary=2%f",gross);
}
else
{
HRA=salary*.30;
DA=salary*.95;
gross=salary+HRA+DA;
printf("gross salary=%2f",gross);
}
 getch();
}

