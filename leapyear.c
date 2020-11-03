#include<stdio.h>
main()
{
int y;
printf("\nEnter a valid year:");
scanf("%d",&y);
if((y%400==0)||((y%4==0)&&(y%100!=0)))
printf("\nLeapYear\n");
else
printf("\nNotLeapYear\n");
}
