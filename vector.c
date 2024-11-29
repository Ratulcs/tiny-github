#include<stdio.h>
#include<math.h>


int main()
{
    double Ax,Ay,Az,Bx,By,Bz,A,B,dot,c,Angle;
    printf("The value of Ax,Ay,Az:\n");
    scanf("%lf %lf %lf",&Ax,&Ay,&Az);
    printf("The value of Bx,By,Bz:\n");
    scanf("%lf %lf %lf",&Bx,&By,&Bz);
    dot=Ax*Bx+Ay*By+Az*Bz;
    A=sqrt(Ax*Ax+Ay*Ay+Az*Az);
    B=sqrt(Bx*Bx+By*By+Bz*Bz);
    c=(dot)/(A*B);
    Angle=acos(c);
    printf("The angle is:%lf",Angle);
    return 0;



}

