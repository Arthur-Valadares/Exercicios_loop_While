/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//atividades arthur valadares
//1- contagem regressiva
int main()
{ int numero;
    printf(" digite um numero: ");
    scanf("%d", &numero);
    while(numero > 0){
        printf("%d ... \n", numero);
        numero--;
    }

    return 0;
}