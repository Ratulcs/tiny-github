#include<stdio.h>
int main()
{
    float radius,area,circumference;
    printf("Enter the value of radius:\n");
    scanf("%f",&radius);
    area=3.1416*radius*radius;
    circumference=2*3.1416*radius;
    printf("The area is:%.2f\n",area);
    printf("The circumference is :%.2f\n",circumference);
    return 0;
}