/*
4) Crie uma função que receba uma letra e uma string e retorne a quantidade de vezes que
aquela letra está presente na string passada.

Chamada da função:
encontra_letra('a', 'uma frase generica de questões de programação')

Saída:
5
*/

#include <stdio.h>
#include <stdlib.h>


// busca e retorna o numero de ocorrencia de um letra em uma frase
int search_letter(char searchChar, char * phrase);


int main() {

    char phraseToSearch[20] = "Crossbot UTFPRs";
    char letter = 's';

    printf("\n Letra: %c - Ocorrencias: %d \n\n", letter, search_letter(letter, phraseToSearch));

    return 0;
}


int search_letter(char searchChar, char * phrase) {

    int frequency = 0;

    for (int i = 0; phrase[i] !='\0';i++) {
        if (phrase[i] == searchChar)
            frequency++;
    }

    return frequency;
}

