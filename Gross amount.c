#include<stdio.h>
int main()
{
    double ga,rp,ha,ta,hi,ns;
    printf("Enter the value of gross amount:\n");
    scanf("%lf",&ga);
    rp=ga*0.05;
    hi=750;
    ha=ga*0.2;
    ta=200;
    printf("Gross amount:%.2lf\n",ga);
    printf("**************************************************\n");
    printf("Retirement plan:              -%.2lf AED\n",rp);
    printf("Health Insurance:             -%.2lf AED\n",hi);
    printf("Housing Allowance:            +%.2lf AED\n",ha);
    printf("Transporation Allowance:      +%.2lf AED\n",ta);
    printf("*************************************************\n");
    ns=ga+ha+ta-(rp+hi);
    printf("Net salary:                     %.2lf AED\n",ns);
    return 0;


}