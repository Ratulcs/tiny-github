#include<stdio.h>
int main()
{
    double I,p,r,t;
    printf("Enter the amount of interest:\n");
    scanf("%lf",&p);
    printf("Enter the amount of interest rate:\n");
    scanf("%lf",&r);
    printf("Enter the amount of time:\n");
    scanf("%lf",&t);
    I=p*r*t;
    printf("The amount of simple interest:%.2lf",I);
    return 0;
    
}