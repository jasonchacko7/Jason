#include <stdio.h>

int main()
{
    double length, width, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == length - 1 || j == 0 || j == width - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line after completing a row
    }
    area = length * width;
    printf("the area of the rectangle is: %lf\n", area);
    perimeter = 2 * (length + width);
    printf("the perimeter of the rectangle is: %lf\n", perimeter);
    return 0;
}