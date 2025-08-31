#include <stdio.h>

int main()
{
    char operation;
    printf("Enter a math operation (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("You selected the '%c' operation.\n", operation);
    int number;
    printf("chose a number: ");
    scanf("%d", &number);
    printf("You entered the number %d.\n", number);
    int number2;
    printf("chose a number: ");
    scanf("%d", &number2);
    printf("You entered the number %d.\n", number);
    printf("%d %c %d = ", number, operation, number2);
    return 0;
}
