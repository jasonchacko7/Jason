#include <stdio.h>

int main()
{
    char operation;
    int number1, number2, result;
    printf("chose an operation +, -, *, /: ");
    scanf(" %c", &operation);
    printf("you chose: %c\n", operation);
    printf("enter your first number: ");
    scanf("%f", &number1);
    printf("you chose %f\n", number1);
    printf("enter your second number: ");
    scanf("%f", &number2);
    printf("you chose %f\n", number2);
    switch (operation)
    {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 != 0)
            {
                result = number1 / number2;
            }
            else
            {
                printf("divide by 0 error/n");
            }
            break;
        }
    if (operation == '+' || operation == '-' || operation == '*' || (operation == '/' && number2 != 0))
    {
        printf("the result is: %f\n", result);
    }
    else
    {
        printf("invalid operation\n");
    }
    printf("thank you for using the calculator\n");
    return 0;            
}