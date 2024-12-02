#include<stdio.h>
#include<math.h>
int main()
{
    float radius,volume,area;
    printf("Enter the value of radius:\n");
    scanf("%f",&radius);
    volume=(4.0/3.0)*3.1416*pow(radius,3);

    area=4*3.1416*pow(radius,2);
    printf("The volume is:%f/n",volume);
    printf("The area is :%f/n",area);
    return 0;

    
}