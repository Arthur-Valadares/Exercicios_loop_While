
#include <stdio.h>
//10- binario

int main() {
    int decimal, resto;
    int binario[32];
    int i = 0;

    printf("Digite um número: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Por favor, digite outro numero.\n");
        return 1;
    }

    if (decimal == 0) {
        printf("Binário: 0\n");
        return 0;
    }

    while (decimal > 0) {
        resto = decimal % 2;
        binario[i] = resto;
        i++;
        decimal = decimal / 2;
    }

    printf("Binário: ");
    i--; 
    while (i >= 0) {
        printf("%d", binario[i]);
        i--;
    }
    printf("\n");

    return 0;
}

