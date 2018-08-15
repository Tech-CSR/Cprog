#include<stdio.h>
int main()
{
    
int t,h,e,m,s,so,tl;
float p;
//int avg;
printf("eter marks");
scanf("%d,%d,%d,%d,%d,%d",&t,&h,&e,&m,&s,&so);
tl=t+h+e+m+s+so;
printf("the total is %d \n",tl);
//avg=tl/6;
//printf("the average is %d \n",avg);
p=(tl*100)/600;
printf("the secured percentage is %f \n",p);

}