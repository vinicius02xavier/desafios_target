#include <stdio.h>
#include <string.h>

int main() {
    char String[500];
    int a = 0;

    printf("Digite uma palavra: ");
    fgets(String, sizeof(String), stdin);

    for(int i = 0; i < strlen(String); i++) {
        if(String[i] == 'a' || String[i] == 'A') {
            a++;
        }
    }

    if(a > 0) {
        printf("A letra 'a' aperece um total de %d vezes.", a);
    } else {
        printf("A letra 'a' não aparece nenhuma vez.");
    }
    
    return 0;
}