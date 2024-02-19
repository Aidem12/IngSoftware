#include <stdio.h>

int main() {
    int num1, num2, resta;

    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Calcular la resta
    resta = num1 - num2;

    // Mostrar el resultado
    printf("La resta de %d y %d es: %d\n", num1, num2, resta);

    return 0;
}
