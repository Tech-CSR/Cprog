#include<stdio.h>
int main()
{
    
int sp, profit, cp, cpi ;
printf("enter the selling price of 15 items");
scanf("%d",&sp);
printf("enter the profit earned on 15 items");
scanf("%d",&profit);
cp=sp-profit;
cpi=cp/15;
printf("Cost price of one item is %d", cpi);
}
