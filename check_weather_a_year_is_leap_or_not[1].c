#include<stdio.h>

int main()
{
int year;
printf("enter the year:");
scanf("%d",&year);
if (year %4==0)
{
printf("this leap year");
}
else
{
printf("this not leap year");
}
 return 0;
}