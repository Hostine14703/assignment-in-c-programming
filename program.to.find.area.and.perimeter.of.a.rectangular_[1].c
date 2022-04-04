#include<stdio.h>
int main()
{
int length;
int width;
int area, perimeter;
printf("enter the length\n");
scanf("%d",& length);
printf("enter the width\n");
scanf("%d",& width);
 area=length*width;
perimeter=length+width+length+width;
printf("the area of a rectangle is %d",area);
    printf("the perimeter of a rectangle is%d", perimeter);
    return 0;
}