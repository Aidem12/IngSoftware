#include <stdio.h>

int main() {
    int num1, num2, mult;

    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Calcular la resta
    mult = num1 * num2;

    // Mostrar el resultado
    printf("La multi de %d y %d es: %d\n", num1, num2, mult);

    return 0;
}
