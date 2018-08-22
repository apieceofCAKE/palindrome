#include <stdio.h>

//This program receive words and numbers to check if they are palindromes

int main() {

    //Max size for the input is 49 characters
    char palavra [50];
    int tamanho = 0;
    //Auxiliary variables
    int aux1 = 0;
    int aux2 = 0;

    printf("   \n");
    printf("Verificador de palíndromos.\n");
    printf("Entre com a palavra (letras minusculas e sem acento ou números): ");
    scanf("%s", palavra);
    printf("   \n");

    //Loop ends when it reaches NUL character
    while (palavra[tamanho] != '\0') {

        tamanho ++;
    }

    while (aux1 < tamanho) {

        if (palavra[aux1] == palavra[(tamanho - aux1 - 1)])
            aux2 ++;

        aux1 ++;
    }

    //aux2 acts as a counter for characters that are the same as its correspondent backwards-wise
    if (aux2 == tamanho)
        printf("A palavra %s é palindromo.\n", palavra);
    else
        printf("A palavra %s não é palindromo.\n", palavra);

    return 0;
}
