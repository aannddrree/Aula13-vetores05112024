#include <stdio.h>

int main() {
    int numeros[5] = {3, 8, 2, 15, 6};
    int maior = numeros[0];

    for(int i = 1; i < 5; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior valor é: %d\n", maior);
    return 0;
}
