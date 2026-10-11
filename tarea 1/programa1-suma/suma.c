/* suma.c — Suma de dos números, en C.
 * Si no se proporcionan argumentos, usa 0.1 y 0.2.
 * UEA 1151039 · Métodos Numéricos en Ingeniería · UAM Azcapotzalco
 *
 * Compilar: gcc -O2 -std=c17 -o suma suma.c
 * Ejecutar: ./suma
 * Ejecutar: ./suma 5 3
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double a = 0.1;
    double b = 0.2;

    if (argc == 3) {
        a = strtod(argv[1], NULL);
        b = strtod(argv[2], NULL);
    } else if (argc != 1) {
        fprintf(stderr, "Uso: %s [numero1 numero2]\n", argv[0]);
        return 1;
    }

    double suma = a + b;

    printf("%.17g\n", suma);

    return 0;
}