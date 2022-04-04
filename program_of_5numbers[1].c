#include<stdio.h>
int main()
{
int x;
int y;
int h;
int w;
int k;
int sum;
    printf("enter the first number\n");
    scanf("%d,&x");
    printf("enter the second number\n");
    scanf("%d,&y");
    printf("enter the third number\n");
    scanf("%d,&h");
    printf("enter the fourth number\n");
    scanf("%d,&w");
    printf("enter the fifth number\n");
    scanf("%d,&k");
    sum=x+y+h+w+k;
    printf("the sum of the 5 numbers is %d"),sum;
    return 0;
}