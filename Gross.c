#include<stdio.h>
int main()
{
    double gross,rate,bonus,tax,hours,net;
    printf("Enter the value of hours:\n");
    scanf("%lf",&hours);
    printf("Enter the value of rate:\n");
    scanf("%lf",&rate);
    gross=hours*rate;
    bonus=0.07*gross;
    tax=0.05*gross;
    net=gross+bonus-tax;
    printf("The value of net is:%lf",net);
    return 0;

}