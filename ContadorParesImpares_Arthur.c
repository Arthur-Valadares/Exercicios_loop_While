/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
//5- Contador de números pares/impares
int main()
{
    int numero, digito;
    int pares = 0, impares = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    numero = abs(numero);

    if (numero == 0) {
        pares = 1;  
    } else {
        while (numero > 0) {
            digito = numero % 10; 
            if (digito % 2 == 0)
                pares++;
            else
                impares++;
            numero = numero / 10; 
        }
    }

    printf("%d pares, %d ímpares\n", pares, impares);

    return 0;
}
