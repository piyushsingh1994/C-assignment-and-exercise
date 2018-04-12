/* Program to calculate electric bill */

#include<stdio.h>
#include<conio.h>
main()
{
float unit,bill,surcharge,total;
clrscr();
printf("Enter the electricity unit");
scanf("%f",&unit);
if (unit<=50)
{
bill=unit*.50;
surcharge=bill*.2;

}
else if(unit<=150)
{
bill=25+((unit-50)*.75);
surcharge=bill*.2;
}
else if (unit<=250)
{
bill=100+((unit-150)*1.20);
surcharge=bill*.2;
}
else
{
bill=220+((unit-250)*1.50);
surcharge=bill*.2;
}
total=bill+surcharge;
printf("Total Bill=Rs %2f",total);
 getch();
 return 0;
}
