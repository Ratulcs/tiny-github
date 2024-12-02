#include<stdio.h>
int main()
{
    double p,v,m,T,s;
    printf("Enter the value of p:\n");
    scanf("%lf",&p);
    printf("Enter the value of v:\n");
    scanf("%lf",&v);
    printf("Enter the value of T:\n");
    scanf("%lf",&T);
    s=(T+460);
    m=(p*v)/(0.37*s);
    printf("The mass air is :%lf",m);
    return 0;

}