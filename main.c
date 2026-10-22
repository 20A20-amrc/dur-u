#include <stdio.h>
#include <math.h>

int main()
{
    float num1,num2,re;
    printf("enter a number1: ");
    scanf("%f",&num1);
    getchar();
    printf("enter a number2:");
    scanf("%f",&num2);
    getchar();
    re=num1*num2;
    printf("\n %.2f * %.2f = %.2f",num1,num2,re);
    return 0;
}
