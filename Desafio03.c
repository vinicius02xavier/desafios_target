#include <stdio.h>

int main() {
    int Indice = 12, Soma = 0, K = 1;

    while(K < Indice) {
        K += 1;
        Soma += K;
    }

    printf("%d", Soma);
    
    return 0;
}

//O valor da variável "Soma" será 77.