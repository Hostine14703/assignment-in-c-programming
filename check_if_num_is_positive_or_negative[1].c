//program to check if given number is positive or negative
#include<stdio.h>
int main()
{
int num;
printf("input a number:");
scanf("%d",&num);
if(num>=0)
printf("%d is a positive num\n",num);
else
printf("%d is negative num\n",num);
    return 0;
}