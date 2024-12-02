#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,m;
    printf("Enter the value of x:\n");
    scanf("%f",&x);
    m=(x-1)/(x);
    y=m+(pow(m,2)/2)+(pow(m,3)/3)+(pow(m,4)/4);
    printf("The value of y:%.2f\n",y);
    return 0;


    
    
}