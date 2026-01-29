#include <stdio.h>
#include <math.h>

int main()
{
    double num1 = 0;
    double num2 = 0;
    double result = 0;
    char operator = '\0';

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the operator(+ - * /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;

    default:
        printf("Enter correct operator.");
        break;
    }
    printf("The result is %.2lf.\n", result);
    return 0;
}