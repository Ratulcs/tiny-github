#include<stdio.h>
int main()
{
    double ga,ft,st,rp,hi,ns;
    printf("Enter the value of Gross amount:\n");
    scanf("%lf",&ga);
    ft=ga*(15.0)/(100);
    st=ga*(3.5)/(100);
    rp=ga*(5)/(100);
    hi=700;
    printf("Gross amount:         %.2lf dihams\n",ga);
    printf("Federal Income Tax:   %.2lf dirhams\n",ft);
    printf("Retirement plan:      %.2lf dirhams\n",rp);
    printf("State Tax:            %.2lf dirahms\n",st);
    printf("Retirement plan:      %.2lf dirhams\n",rp);
    printf("Health insurance:     %.2lf dirhams\n",hi);
    ns=(ga)-(ft+st+rp+hi);
    printf("Net salary:           %.2lf dirhams\n",ns);
    return 0;

}