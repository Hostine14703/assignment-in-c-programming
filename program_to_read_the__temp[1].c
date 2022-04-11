//program to read Temperature in centigrade
#include<stdio.h>
void main()
{
int temp;
printf("input day's temperature:\n");
scanf("%d",&temp);
if(temp<0)
printf("freezing weather.\n");
else if(temp<10)
printf("very cold weather.\n");
else if (temp<20)

printf("cold weather.\n");

else if(temp<30)

printf("normal in temperature.\n");

else if (temp<40)

printf("it's hot.\n");
else
printf("it's very hot.\n");
}
