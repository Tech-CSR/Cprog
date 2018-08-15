#include<stdio.h>
int main()
{
    
int l,b,r,ar,pr;
float ac,cc;
printf("enter l,b,r values");
scanf("%d%d%d",&l,&b,&r);
ar=(l*b);
pr=2*(l+b);
ac=3.14*r*r;
cc=2*3.14*r;
printf("the area of rectage is %d \n ",ar);
printf("perimeter of rectage is %d \n",pr);

printf("the area of circle is %f\n and ",ac);
printf("circumferece of circle is %f \n",cc);
}
