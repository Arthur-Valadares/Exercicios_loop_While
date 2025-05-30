/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//7- Numeros Perfeitos


int main() {
    int numero, soma = 0, i = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("digite um número positivo.\n");
        return 1;
    }


    while (i <= numero / 2) {
        if (numero % i == 0) {
            soma += i;
        }
        i++;
    }

    
    if (soma == numero) {
        printf("%d é um número perfeito.\n", numero);
    } else {
        printf("%d não é um número perfeito.\n", numero);
    }

    return 0;
}
