#include <stdio.h>

int main() {
    int numeros[] = {5, 1, 4, 2, 8, 3, 6, 7};
    int tamanho = 8;
    int i, j, temp;
    int troca = 0;

    for (i = 0; i < tamanho - 1; i++) {

        for (j = 0; j < tamanho - i - 1; j++) {
            if (numeros[j] < numeros[j + 1]) {

                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
                troca++;
            }
        }

        if (troca == 0) {
            break;
        }
    }

    printf("Array em ordem decrescente: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
