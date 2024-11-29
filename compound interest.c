#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,n,A;
    printf("Enter the value of intial amount of interest:\n");
    scanf("%f",&p);
    printf("Enter the value of rate:\n");
    scanf("%f",&r);
    printf("Enter the number of times interest per years:\n");
    scanf("%f",&n);
    printf("Enter the value of time: ");
    scanf("%f",&t);
    A=p*pow((1+r/n),n*t);
    printf("The value of compound interest:%.2f",A);
    return 0;

}