#include<stdio.h>
int main()
{
    double base,height,area;
    printf("Enter the value of base:\n");
    scanf("%lf",&base);
    printf("Enter the value of height:\n");
    scanf("%lf",&height);
    area=0.5*base*height;
    printf("The area is :%lf",area);
    return 0;
}