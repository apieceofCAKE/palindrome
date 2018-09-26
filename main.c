#include <stdio.h>

//This program receive words and numbers to check if they are palindromes

int main() {

    //Max size for the input is 49 characters
    char word [50];
    int size = 0;
    
    //Auxiliary variables
    int aux1 = 0;
    int aux2 = 0;

    printf("\nPalindrome verifier.\n");
    printf("Enter string (case and special characters sensitive): \n");
    scanf("%s", word);
   
    printf("   \n");

    //Loop ends when it reaches NUL character
    while (word[size] != '\0') {

        size ++;
    }

    while (aux1 < size) {

        if (word[aux1] == word[(size - aux1 - 1)])
            aux2 ++;
            
        aux1 ++;
    }

    //aux2 acts as a counter for characters that are the same as its correspondent backwards-wise
    if (aux2 == size)
        printf("The string %s is a palindrome.\n", word);
    else
        printf("The string %s isn't a palindrome.\n", word);

    return 0;
}
