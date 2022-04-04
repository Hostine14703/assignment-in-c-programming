//program to give a discount of 10%
#include<stdio.h>
int main()
{
int items;
int amount;
int price;
int discount;
    printf("enter amount and price:");
    scanf("%d",& items,& price);
    amount=items*price;
    if(amount>100)
    {
    discount=amount*0.1;
    amount=amount-discount;
    }
    printf("%d", amount);
    return 0;
}