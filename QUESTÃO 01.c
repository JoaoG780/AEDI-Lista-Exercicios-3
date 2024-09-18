#include <stdio.h>

int main() {
    int i, j;
    char temp;
    int tamanho;
    printf("Digite quantidade de letras que você quer inserir: ");
    scanf("%d", &tamanho);

    char letras[tamanho];

    printf("Digite %d letras minusculas: ", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf(" %c", &letras[i]);
        if (letras[i] >= 'A' && letras[i] <= 'Z') {
            printf("\n");
            printf("ERRO, reinicie o codigo e digite letras minusculas.");
            return 1;
        }
    }

    for (i = 0; i < tamanho - 1; i++) {

        for (j = 0; j < tamanho - i - 1; j++) {
            if (letras[j] > letras[j + 1]) {
                temp = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = temp;
            }
        }
    }

    printf("Letras em ordem alfabética: ");
    for (i = 0; i < tamanho; i++) {
        printf("%c ", letras[i]);
    }
    printf("\n");

    return 0;
}
