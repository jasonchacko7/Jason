#include <stdio.h>
#include <math.h>

int main()
{
    float salary, hours, money;
    
    printf("what is your salary: ");
    scanf("%f", &salary);
    printf("how many hours did you work this month: ");
    scanf("%f", &hours);
    money = salary * hours;
    printf("you earned: %.2f\n", money);
    return 0;
}