#include<stdio.h>
int main()
{
    double n,y;
    printf("Enter the value of n:\n");
    scanf("%lf",&n);
    y=(2*n*(n+1)*(2*n+1))/(3.0);
    printf("The value of y:%.2lf",y);
    return 0;
}