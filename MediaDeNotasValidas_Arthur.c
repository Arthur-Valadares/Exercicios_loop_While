/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//4- media de notas válidas

int main(){
    
    int nota, media = 0, divisor = 1; 
    printf("---Média de notas válidas---\n");
    printf("digite uma nota: ");
    scanf("%d", &nota);
    
    while(nota <= 10){
        media = (media + nota)/divisor;
        printf("digite outra nota: ");
        divisor++;
        scanf("%d", &nota);
    }
    
    while(nota > 10){
        printf("!erro! digite uma nota válida! \n");
        printf("media = %d", media);
        break;
    }
    return 0;
}
