/*
3) Crie uma função que recebe uma lista de números e retorne uma lista apenas com os
números primos.

Chamada da função
encontra_primo([1,2,3,4,5]);

Saída
[2,3,5]
*/

#include <stdio.h>
#include <stdlib.h>

#define LENGTH_ARRAY 15

// Funcao para testar se um numero eh primo
int isPrime(int number);

int main() {

    int numberList[LENGTH_ARRAY] = {10, 4, 5, 7, 11, 43, 47, 53, 67, 71, 99, 81, 0, 1, 2};

    for (int i = 0; i < LENGTH_ARRAY; i++) {
        printf(" %d eh primo? %s\n", numberList[i], isPrime(numberList[i]) == 1 ? "Sim" : "Nao" );
    }

    return 0;
}

int isPrime(int number) {
    
    int primeDivisers[5] = {2, 3, 5, 7, 11};
    int flag = 0;

    // Se o numero for 2, 3, 5, 7 ou 11 eh um numero primo, pula a etapa de testar a divisibilidade do numero
    if (number == 2 || number == 3 || number == 5 || number == 7 || number == 11) {
        return 1; // Eh um numero primo
    }

    // se o numero for 0 ou 1, entao ele nao eh primo
    if (number == 0 || number == 1) {
        flag = 1;
    }

    // Aqui vamos testar a divisibilidade do numero por 2, 3, 5, 7 e 11, caso seja divisivel por algum
    // desses numeros, entao este eh um numero primo
    for (int i = 0; i < 5; i++) {

        // Testa a divisibilidade do numero pelos primos divisores (2, 3, 5, 7 e 11)
        if (number % primeDivisers[i] == 0) {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0) {
        return 1; // Este eh um numero primo
    }
    
    return 0; // Este nao eh um numero primo
}


