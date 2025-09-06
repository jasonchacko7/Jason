#include <stdio.h>
#include <math.h>

int main()
{
    float distance, speed, time;
    printf("what is the distance: ");
    scanf("%f", &distance);
    printf("what is the speed: ");
    scanf("%f", &speed);
    time = distance / speed;
    printf("you will arrive in: %.2f hours\n", time);
    return 0;
}