/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// 6- sequência de Fibonacci

int main() {
    int n;
    int a = 0, b = 1, proximo;
    int i = 0;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("digite um número maior que 0.\n");
        return 1;
    }

    printf("Sequência de Fibonacci: ");

    while (i < n) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(", %d", b);
        } else {
            proximo = a + b;
            printf(", %d", proximo);
            a = b;
            b = proximo;
        }
        i++;
    }

    printf("\n");
    return 0;
}
