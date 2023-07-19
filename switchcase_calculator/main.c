#include <stdio.h>


int main()
{

    double num1, num2, result;
    char operator;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator)
    {
        case '+':
            result = num1+num2;
            printf("%.1lf + %.1lf : %.1lf", num1, num2, result);
            break;
    
        case '-':
            result = num1 - num2;
            printf("%.1lf - %.1lf : %.1lf", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.1lf * %.1lf : %.1lf", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("%.1lf / %.1lf : %.1lf", num1, num2, result);
            break;


    }
    
}
