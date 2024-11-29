#include<stdio.h>
int main()
{
    float day,year;
    printf("Enter the value of day:\n");
    scanf("%f",&day);
    year=day/365;
    printf("The value of year:%.2f",year);
    return 0;
}