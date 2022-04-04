//test if a number is divisible by 5 or not
#include<stdio.h>
int main()
{
int num;
printf("enter any num:");
scanf("%d",&num);
//true if a num is perfectly divisible by 5
if(num %5==0)
printf("%d num divisible by 5.",num);
else
printf("%d num is not divisible by 5.",num);
return 0;
}