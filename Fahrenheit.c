#include<stdio.h>
int main()
{
    float celsius,Fahrenheit;
    printf("Enter the value of Fahrenheit:\n");
    scanf("%f",&Fahrenheit);
    celsius=(Fahrenheit-32)*(5/9.0);
    printf("The converted temperature celsius is:%.2f",celsius);
    return 0;

}