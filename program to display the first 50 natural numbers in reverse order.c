/**
*C program to display the first 50numbers in reverse order
*/
#include<stdio.h>
int main()
{
int i,start;
/*input start range from user */
printf("enter starting value:");
scanf("%d",&start);
/*
*run loop from 'start' to 1 and
*decrement 1 in each iteration
*/
for(i=start;i>=1;i--)
{
printf("%d\n",i);
}
return 0;
}