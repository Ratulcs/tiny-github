#include<stdio.h>
int main()
{
    double tot,bonus,fix,tax,final_salary;
    printf("Enter the value of total salary:\n");
    scanf("%lf",&tot);
    printf("Enter the value of fixed salary:\n");
    scanf("%lf",&fix);
    bonus=(15.0)/(100)*tot;
    tax=(12.0)/(100)*fix;
    final_salary=fix+bonus-tax;
    printf("The final salry is:%.2lf",final_salary);
    return 0;
}                                         