#include<stdio.h>
int main()
{
    double length,area;
    printf("Enter the value of length:\n");
    scanf("%lf",&length);
    area=length*length;
    printf("The value of area:%lf",area);
    return 0;
}