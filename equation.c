#include<stdio.h>
#include<math.h>
int main()
{
    double x,t,m,n,p,k;
    printf("Enter the value of x:\n");
    scanf("%lf",&x);
    printf("Enter the value of t:\n");
    scanf("%lf",&t);
    n=sqrt(x*t);
    p=(24*t-10*t)/(n+100);
    k=(3*t)/(6*t*t);
    m=sqrt(p)+pow(k,2);
    printf("The value of m:%.2lf",m);
    return 0;



}