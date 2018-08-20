#include <stdio.h>

int main() {

    char palavra [50];
    int tamanho = 0;
    int aux1 = 0;
    int aux2 = 0;

    printf("   \n");
    printf("Verificador de palíndromos.\n");
    printf("Entre com a palavra (letras minusculas e sem acento ou números): ");
    scanf("%s", palavra);
    printf("   \n");

    while (palavra[tamanho] != '\0') {

        tamanho ++;
    }

    while (aux1 < tamanho) {

        if (palavra[aux1] == palavra[(tamanho - aux1 - 1)])
            aux2 ++;

        aux1 ++;
    }

    if (aux2 == tamanho)
        printf("A palavra %s é palindromo.\n", palavra);
    else
        printf("A palavra %s não é palindromo.\n", palavra);

    return 0;


   /* while (x < 51) {

        if (palavra[(50 - x)] != aux && palavra[(50 - x)] != "\0")
            inversa[x] = palavra[(50 - x)];
            y = y + 1;
        x = x + 1;
    }

    printf("%s\n", inversa);

    while (z <= y) {

        if (palavra[z] == inversa[z])
            y = y - 1;
        z = z + 1;
    }

    if (y == 0)
        printf("A palavra %s é palindromo.\n", palavra);
    else
        printf("A palavra %s não é palindromo.\n", palavra);

    return 0;*/
}