/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// 3- calclulo fatorial
int main()
{
    int numero, fatorial = 1;
    
    printf("---Calculo de Fatorial---\n");
    printf("digite um número: ");
    scanf("%d", &numero);
    
    while( numero != 1 ){
        
        if(numero == 0){
            printf("O fatorial de 0 é 1");
            
        } else{
            fatorial *= numero;
            numero--;
        }
    }
    
    printf("resultado = %d", fatorial);
    return 0;
}
