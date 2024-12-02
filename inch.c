#include<stdio.h>
int main()
{
    float inch,centimeter;
    printf("Enter the value of inch:\n");
    scanf("%f",&inch);
    centimeter=2.54*inch;
    printf("The converted scale centimeter is:%.2f",centimeter);
    return 0;

}