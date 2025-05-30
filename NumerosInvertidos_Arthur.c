/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//8- Números invertidos
int main() {
    int numero, invertido = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("digite um número positivo.\n");
        return 1;
    }

    while (numero > 0) {
        invertido = invertido * 10 + (numero % 10); 
        numero = numero / 10; 
    }

    printf("Número invertido: %d\n", invertido);

    return 0;
}
