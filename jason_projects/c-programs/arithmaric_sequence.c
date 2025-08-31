#include <stdio.h>

int main() {
    float first_term, common_difference, nth_term;
    int n;
    printf("Enter the first term of the arithmetic sequence: ");
    scanf("%f", &first_term);  
    printf("Enter the common difference: ");
    scanf("%f", &common_difference);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    nth_term = first_term + (n - 1) * common_difference;
    printf("The %dth term of the arithmetic sequence is: %.2f\n", n, nth_term);
    return 0;
}