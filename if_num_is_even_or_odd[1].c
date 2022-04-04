//program to determine whether number is even or odd
#include<stdio.h>
int main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
//true if num is perfectly divisible by 2
if (num%2==0)
printf("%d the number is even.",num);
else
printf("%d the number is odd.",num);
 return 0;
}