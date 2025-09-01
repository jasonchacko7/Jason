#include <stdio.h>

int main()
{
    int salary, hours, money;
    printf("what is your salary: ");
    scanf("%d", &salary);
    printf("how many hours did you work this month: ");
    scanf("%d", &hours);
    money = salary * hours;
    printf("you earned %d", money);
    return 0;
}