#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    // Output temperature in Celsius
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}

