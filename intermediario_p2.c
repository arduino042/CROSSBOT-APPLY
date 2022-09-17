/*
2) Escreva uma função que receba uma lista de números e que retorne a lista sem números
repetidos.

Exemplo:
list = [1, 2, 5, 9, 2]

Resultado:
list = [1, 2, 5, 9]
*/

#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

#define LENGTH_ARRAY 10

// Funcao pra remover os elementos repetidos e retorna um ponteiro pra um novo array
int * remove_repeated_elements(int list[], int * lengthUnrepeatedList);

// Algoritmo de Ordenacao Bubble Sort
void bubble_sort(int list[]);

int main() {

    int list[LENGTH_ARRAY] = {1, 2, 5, 9, 2, 5, 9, 10, 11, 11};
    
    bubble_sort(list);

    for (int i = 0; i < LENGTH_ARRAY; i++) {
        printf("%d ", list[i]);
    }

    int lengthUnrepeatedList = 0; // Erro no retorno do Ptr pra funcao --> not_repeated_list <--
    int* not_repeated_list = remove_repeated_elements(list, &lengthUnrepeatedList);

    printf("\n\nLista sem elementos repetidos\n");    
    for (int i = 0; i < lengthUnrepeatedList; i++) {
        printf("%d ", not_repeated_list[i]);
    }

    free(not_repeated_list);

    return 0;
}

int * remove_repeated_elements(int list[], int * lengthUnrepeatedList) {

    int totalSpace = 0;

    // Vamos ver quantos diferentes o Array possui
    for (int i = 1; i < LENGTH_ARRAY; i++) {
        if (list[i] != list[i - 1]) {
            totalSpace++;
        }
    }

    // Define o tamanho do novo array
    *lengthUnrepeatedList = totalSpace;

    // Alocacao de um espaco na Heap pra guardar o nosso novo array
    // arrayWithoutRepeatedElements
    int *arrayWithoutRepeatedElements = malloc(totalSpace * sizeof(int));
    if (arrayWithoutRepeatedElements == NULL) {
        printf("\n\t -> Erro na alocacao de memoria\n");
        exit(1);
    }

    // Vamos colocar cada elemento sem ser repetido no novo array
    for (int i = 1, nextIndex = 0; i < LENGTH_ARRAY; i++) {
        if (list[i] != list[i - 1]) {
            arrayWithoutRepeatedElements[nextIndex] = list[i - 1];
            nextIndex++;
        }
    }

    return arrayWithoutRepeatedElements;
}

// Algoritmo de Ordenacao Bubble Sort
void bubble_sort(int list[]) {
    int aux;

    for (int counter = 1; counter < LENGTH_ARRAY; counter++) {
        for (int i = 0; i < LENGTH_ARRAY - 1; i++) {
            
            // troca os elementos do array
            if (list[i] > list[i + 1]) {
                aux = list[i];
                list[i] = list[i + 1];
                list[i + 1] = aux;
            }
        }
    }
}
