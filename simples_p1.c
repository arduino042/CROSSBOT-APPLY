/*
1) Leia um vetor de 10 posições e em seguida ler também dois valores X e Y quaisquer
correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma
dos valores encontrados nas respectivas posições X e Y.

lista = [13, 5, 7, 6, 4, 8, 16, 31, 9, 21]

Exemplo:
Digite x: 2
Digite y: 3

Soma = 13
*/
#include <stdio.h>

#define VECTOR_LENGTH 10

// Funcao que dado 2 posicoes retorna a soma de seus respectivos valores no array
int sum2values_vector(int v[], int firstPosition, int secondPosition);

int v[VECTOR_LENGTH] = {13, 5, 7, 6, 4, 8, 16, 31, 9, 21};

int main() {

    printf("Dado o vetor ");

    // mostrar cada elemento do vetor
    for (int i = 0; i < VECTOR_LENGTH; i++) {
        printf(" %d", v[i]);
    }
    
    int x, y;

    // Coisa simples preferi nao fazer nenhum teste pra validar o input do usuario
    printf("\n\nQual o Valor de x, sendo que 0 seria o primeiro elemento: ");
    scanf("%d", &x);
    printf("\nValor de y: ");
    scanf("%d", &y);

    // Preferi nao armazenar em uma variavel jogando direto no
    // printf o resultado da funcao sum2values
    printf("\nA soma dos elementos na posicao %d e %d eh %d", x, y, sum2values_vector(v, x, y));

    return 0;
}

int sum2values_vector(int v[], int firstPosition, int secondPosition) {
    return v[firstPosition] + v[secondPosition];
}


