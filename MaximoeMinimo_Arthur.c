/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//9 - Maior e menor
int main() {
    int numero;
    int maximo, minimo;
    int primeiro = 1;

    printf("Digite números inteiros (0 para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (primeiro) {
            maximo = minimo = numero;
            primeiro = 0;
        } else {
            if (numero > maximo)
                maximo = numero;
            if (numero < minimo)
                minimo = numero;
        }
    }

    if (primeiro) {
        printf("Nenhum número foi digitado.\n");
    } else {
        printf("Máximo = %d, Mínimo = %d\n", maximo, minimo);
    }

    return 0;
}
