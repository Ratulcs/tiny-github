#include<stdio.h>


int sum(int a,int b)
{
  return a+b;
}


int main()
{
  int num1,num2;

  printf("Enter the value of num1:\n");
  scanf("%d",&num1);


  printf("Enter the value of num2:\n");
  scanf("%d",&num2);

  printf("The sum is :%d",sum(num1,num2));
}
