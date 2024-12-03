#include<stdio.h>
#include<math.h>
int main()
{
    double x,m,n;
    printf("Enter the value of x:\n");
    scanf("%lf",&x);
    m=(3*pow(x,4)+2*sqrt(x)-2);
    n=5*pow(m,4)-4;
    printf("The value of m:%.2lf",n);
    return 0;



}