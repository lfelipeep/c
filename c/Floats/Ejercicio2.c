#include <stdio.h>

int main() {
    float celsius;
    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9/5) + 32;
    printf("Equivale a: %.2f F\n", fahrenheit);
    return 0;
}
