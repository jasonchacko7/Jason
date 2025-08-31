#include <stdio.h>

int main()
{
    int age;
    int year;
    printf("Enter your age: ");
    scanf("%d", & age);
    printf("Enter the current year: ");
    scanf("%d", & year);
    int birth_year = year - age;
    printf("You were born in the year: %d\n", birth_year);
    return 0;
}