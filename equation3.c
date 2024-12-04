#include<stdio.h>
#include<math.h>
int main()
{
    double x,t,m,a,b,c,d,e,n;
    printf("Enter the value of x:\n");
    scanf("%lf",&x);
    a=sqrt(3)*(pow(t,2));  
    b=sqrt(t)+x;
    c=(a)/(b);
    d=sqrt(t+3);
    e=(d)/(pow(t,2));
    n=pow(e,t);
    m=pow(c,x)+log10(n);
    printf("The value of m:%lf",m);
    return 0;


}