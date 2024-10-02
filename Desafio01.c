#include <stdio.h>

int Fibonacci(Num) {
    int a = 0, b = 1, aux;

    if(Num == a || Num == b) {
        return 1;
    }

    while(b < Num) {
        aux = b;
        b += a;
        a = aux;
    }

    if(b == Num) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int Num;

    printf("Digite um número: ");
    scanf("%d", &Num);

    if(Fibonacci(Num)) {
        printf("O número %d pertence à sequência de Fibonacci.", Num);
    }
    else {
        printf("O número %d não pertence à sequência de Fibonacci.", Num);
    }
    
    return 0;
}