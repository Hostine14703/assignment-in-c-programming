#include<stdio.h>
int main()
{
int r;
int π=3.14;
float area, perimeter;
printf("enter the radius of a circle");
scanf("%f",&r);
area=π*r*r;
perimeter=2*π*r;
    printf("the area of a circle is %f\n"),area;
    printf("the perimeter of the circle is %f\n"), perimeter;
    return 0;
}