#include <stdio.h>

int main() {
    int a, b, c, d;
    double sum, average;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum = a + b + c + d;
    average = sum / 4.0; 
    printf("Sum = %d; Average = %.1f\n", sum, average);
    return 0;
}