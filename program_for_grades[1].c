#include<stdio.h>
int main()
{
int average;
int physics, chemistry, biology, mathematics;
printf("enter the marks for physics, chemistry, biology and mathematics\n");
scanf("%d,%d,%d,%d",& physics,& chemistry,& biology,& mathematics);
average=(physics+chemistry+biology+mathematics)/4;
printf(" average  is %d\n", average);
if(average>=70&& average<=100)
{
printf("grade A");
}
else if (average>=60&& average<70)
{
printf("grade B");
}
else if ( average>=50&& average<60)
{
printf("grade C");
}
else if(average>=40&& average<50)
{
printf("grade D");
}
else
{
printf("fail");
}
    return 0;
}
    