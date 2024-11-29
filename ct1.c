#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,dot,A,B,C,Angle;
    printf("Enter the value of x1,y1,x2,y2:");
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    dot=(x1*x2+y1*y2);
    A=sqrt(x1*x1+y1*y1);
    B=sqrt(x2*x2+y2*y2);
    C=(dot)/(A*B);
    Angle=acos(C);
    printf("The angle is:%.2lf",Angle);
    return 0;

}