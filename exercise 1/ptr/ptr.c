#include <stdio.h>
#include <conio.h>

void main() {
    //printf("Hello, World!\n");
    int p, t;
    float r, si;
    printf("enter P,T,R values");
    scanf("%d%d%f", &p, &t, &r);

    si = p * t * r / 100;
    printf("%f", si);

}