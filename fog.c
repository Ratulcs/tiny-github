#include<stdio.h>
#include<math.h>
int main()
{
    double x,m,n;
    printf("Enter the value of x:\n");
    scanf("%lf",&x);
    m=7*x-6;
    n=(4*pow(m,2)*2*sqrt(x)-3);
    printf("The value of n:%lf",n);
    return 0;



}