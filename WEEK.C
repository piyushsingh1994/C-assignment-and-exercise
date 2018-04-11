/* Program  to input week number and print week day */
#include<stdio.h>
#include<conio.h>
main()
{
int x;
clrscr();
printf("Enter the week number");
scanf("%d",&x);
if(x==1)
{
printf("Monday");
}
else if (x==2)
{
printf("Tuesday");
}
else if(x==3)
{
printf("Wednesday");
}
else if  (x==4)
{
 printf("Thursday");
}
else if (x==5)
{
printf("Friday");
}
else if (x==6)
{
printf("Saturday");
}
else if(x==7)
{
printf("Sunday");
}
else
{
printf("invalid input");
}
getch();

}