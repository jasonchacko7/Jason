#include <stdio.h> 

int main()
{
    char name[100];
    char age[100];
    printf("Enter your name: ");
    scanf("%99s", name);
    printf("Enter your age: ");
    scanf("%99s", age);
    printf("Hello, %s. You are %s years old.\n", name, age);
}