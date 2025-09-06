#include <stdio.h>
#include <math.h>

int main() 
{
    char unit, format;
    int hours, min, sec;
    printf("choose hours, minutes, or seconds: ");
    scanf("%c", &unit);

    if (unit == 's') {
        printf("Enter time in seconds: ");
        scanf("%d", &sec);
        printf("choose the format: 1.h, 2.m, 3.s, 4.hms, 5.hm, 6.ms: ");
        scanf("%c", &format);
            switch(format)
            {
                case '2':
                    min = sec / 60;
                    printf("%d seconds = %d minutes\n", sec, min);
                    break;
                case '1':
                    hours = sec / 3600;
                    printf("%d seconds = %d hours\n", sec, hours);
                    break;
                case '5':
                    min = hours * 60;
                    sec = hours * 3600;
                    printf("%d seconds = %d hours and %d minutes\n", hours, min, sec);
                    break;
                case '4':
                    hours = sec / 3600;
                    int temp = (int)hours;
                    temp = hours - temp;
                    min = temp * 60;
                    temp = (int)min;
                    temp = min - temp;
                    sec = temp * 60;
                    printf("%d seconds = %d hours, %d minutes and %d seconds");
                default:
                    printf("invalid operation");
            }
    } else if (unit == 'm') {
        printf("Enter time in minutes: ");
        scanf("%d", &min);
        hours = min / 60;
        sec = min * 60;
        printf("%d minutes = %d hours = %d seconds\n", min, hours, sec);
    } else if (unit == 's') {
        printf("Enter time in seconds: ");
        scanf("%d", &sec);
        min = sec / 60;
        hours = min / 60;
        printf("%d seconds = %d minutes = %d hours\n", sec, min, hours);
    } else {
        printf("Invalid unit\n");
    }
    return 0;
}