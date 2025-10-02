#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n > 0) printf("Es positivo.\n");
    else if (n < 0) printf("Es negativo.\n");
    else printf("Es cero.\n");

    return 0;
}
