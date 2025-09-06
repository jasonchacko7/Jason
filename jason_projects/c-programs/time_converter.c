#include <stdio.h>

int main() {
    char unit, format;
    long long hours, min, sec, original;  // long long funny name

    printf("Choose hours (h), minutes (m), or seconds (s): ");
    scanf(" %c", &unit);

    if (unit == 's') {
        printf("Enter time in seconds: ");
        scanf("%lld", &sec);   // long long hehehhehehe
        original = sec;

        printf("Choose the format: 1.h, 2.m, 3.hm, 4.ms, 5.hms: ");
        scanf(" %c", &format);

        switch(format) {
            case '1':
                hours = sec / 3600;
                printf("%lld seconds = %lld hours\n", original, hours);
                break;
            case '2':
                min = sec / 60;
                printf("%lld seconds = %lld minutes\n", original, min);
                break;
            case '3':
                hours = sec / 3600;
                min = (sec % 3600) / 60;
                printf("%lld seconds = %lld hours and %lld minutes\n", original, hours, min);
                break;
            case '4':
                min = sec / 60;
                sec = sec % 60;
                printf("%lld seconds = %lld minutes and %lld seconds\n", original, min, sec);
                break;
            case '5':
                hours = sec / 3600;
                min = (sec % 3600) / 60;
                sec = sec % 60;
                printf("%lld seconds = %lld hours, %lld minutes and %lld seconds\n", original, hours, min, sec);
                break;
            default:
                printf("Invalid operation\n");
                break;
        }
    }
    else if (unit == 'm') {
        printf("Enter the time in minutes: ");
        scanf("%lld", &min);
        original = min;
        printf("Choose the format: 1.h, 2.s, 3.hm: ");
        scanf(" %c", &format);
        switch(format) {
            case '1':
                hours = min / 60;
                printf("%lld minutes = %lld hours\n", original, hours);
                break;
            case '2':
                sec = min * 60;
                printf("%lld minutes = %lld seconds\n", original, sec);
                break;
            case '3':
                hours = min / 60;
                min = min % 60;
                printf("%lld minutes = %lld hours and %lld minutes\n", original, hours, min);
                break;
            default:
                printf("Invalid operation\n");
                break;
        }
    }
    else if (unit == 'h') {
        printf("Enter the time in hours: ");
        scanf("%lld", &hours);
        original = hours;
        printf("Choose the format: 1.m, 2.s,: ");
        scanf(" %c", &format);
        switch(format) {
            case '1':
                min = hours * 60;
                printf("%lld hours = %lld minutes\n", original, min);
                break;
            case '2':
                sec = hours * 3600;
                printf("%lld hours = %lld seconds\n", original, sec);
                break;
            default:
                printf("Invalid operation\n");
                break;
        }
    }
    else {
        printf("Invalid unit\n");
    }

    return 0;
}

// wowowowowowowowow 100 lines