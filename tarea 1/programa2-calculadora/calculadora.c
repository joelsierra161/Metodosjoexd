#include <stdio.h>
#include <stdlib.h>

void limpiar_buff() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int pedir_numero(double *num, const char *mensaje) {
    int valido = 0;
    while (!valido) {
        printf("%s", mensaje);
        if (scanf("%lf", num) == 1) {
            valido = 1;
        } else {
            printf("[ERROR] Entrada invalida. Por favor, ingrese un numero valido.\n");
            limpiar_buff();
        }
    }
    return 1;
}

int main() {
    int opcion = 0;
    double num1, num2, resultado;

    while (1) {
        printf("\n====================================\n");
        printf("        CALCULADORA BASICA\n");
        printf("====================================\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("------------------------------------\n");
        printf("Seleccione una opcion (1-5): ");

        if (scanf("%d", &opcion) != 1) {
            printf("[ERROR] Opcion invalida. Debe ingresar un numero del 1 al 5.\n");
            limpiar_buff();
            continue;
        }

        if (opcion == 5) {
            printf("Saliendo de la calculadora. ¡Hasta luego!\n");
            break;
        }

        if (opcion < 1 || opcion > 5) {
            printf("[ERROR] Opcion fuera de rango. Seleccione entre 1 y 5.\n");
            continue;
        }

        pedir_numero(&num1, "Ingrese el primer numero: ");
        pedir_numero(&num2, "Ingrese el segundo numero: ");

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("\n-> Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("\n-> Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("\n-> Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
                break;
            case 4:
                if (num2 == 0) {
                    printf("\n[ERROR] No se puede dividir entre cero. Intente de nuevo.\n");
                } else {
                    resultado = num1 / num2;
                    printf("\n-> Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
                }
                break;
        }
    }

    return 0;
}
