#include <stdio.h>

int main(void) {
    float a, b;
    float result;

    printf("Enter numerator : ");
    scanf("%f", &a);

    printf("Enter denominator : ");
    scanf("%f", &b);

    result = a / b;

    printf("The result of the division is %f.\n", result);

    return 0;
}