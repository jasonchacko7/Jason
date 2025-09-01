#include <stdio.h>

int main()
{
    int a1, an, n, sn;
    printf("enter the first number: ");
    scanf ("%d", &a1);
    printf("enter the number of terms: ");
    scanf("%d", &n);
    printf("enter the last term: ");
    scanf("%d", &an);
    sn = ((a1 + an) * n / 2);
    printf("The sum of the sequence is: %d\n", sn);
    return 0;
}