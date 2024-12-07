#include<stdio.h>
int main()
{
    double length,width,perimeter;
    printf("Enter the value of length:\n");
    scanf("%lf",&length);
    printf("Enter the value of width:\n");
    scanf("%lf",&width);
    perimeter=2*(length+width);
    printf("The value of perimeter:%lf",perimeter);
    return 0;
}