#include<stdio.h>
#include<math.h>
int main()
{
    double a,area;
    printf("Enter the value of a:\n");
    scanf("%lf",&a);
    area=sqrt(3)*pow(a,2);
    printf("The area is:%lf",area);
    return 0;

}