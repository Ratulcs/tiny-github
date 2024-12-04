#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,m,t,n,u;
    printf("Enter the value of a,b,c,d:\n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    t=pow((a-b),2);
    n=pow((c+4*d),2);
    u=sqrt((a-b)/(c+d));
    m=sqrt(t/n)+sqrt(u);
    printf("The value of m:%lf",m);
    return 0;




}