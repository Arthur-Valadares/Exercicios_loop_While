/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//2- Soma até digitar zero
int main()
{
    int numero;
    int soma = 0;
    printf("---soma até digitar zero---\n" );
    printf("Digite um numero para soma: ");
    scanf("%d", &numero);
    
    while(numero != 0){
        soma += numero;
        printf("proximo numero: ");
        scanf("%d", &numero);
    }
    printf("soma = %d \n", soma);

    return 0;
}
