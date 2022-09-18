/*
2) Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito
quando ele é igual à soma dos seus divisores excetuando-o. (ex: 6 é perfeito, 6 = 1 + 2 +
3, que são seus divisores). A função deve retornar um valor booleano. (Caso esteja
escrevendo seu programa em C, considere o inteiro 0 para o booleano false e 1 para o
true)
*/

#include <stdio.h>
#include <math.h>

#define TOTAL_NUMBERS 10

int number_is_perfect(unsigned long long int number);

int main() {

    /*
    1º numero perfeito: 6
    2º numero perfeito: 28
    3º numero perfeito: 496
    4º numero perfeito: 8128
    5º numero perfeito: 33550336
    6º numero perfeito: 8.589.869.046
    7º numero perfeito: 137.438.691.328
    8º numero perfeito: 2.305.843.008.139.952.128
    */

    // Aqui voce coloca o numero que queira testar
    unsigned long long int testNumbers[TOTAL_NUMBERS] = {6, 12, 28, 496, 505, 8128, 33550336, 8589869046, 137438691328, 2305843008139952128};

    for (int i = 0; i < TOTAL_NUMBERS; i++) {
        printf("\n %llu eh perfeito? %s", testNumbers[i], number_is_perfect(testNumbers[i]) == 1 ? "Sim" : "Nao");
    }

    return 0;
}

int number_is_perfect(unsigned long long int number) {

    unsigned long long int perfectNumber = 0;
    int isPerfect = 0; // Por padrao o numero nao eh perfeito

    printf("\n\n");
    // Testa todas as possibilidades usando a formula do numero perfeito
    // pow(2, n−1) * (pow(2, n) - 1)
    // Este loop se encerra apos o numero perfeito for maior que o numero testado
    for (int counter = 1; perfectNumber <= number ; counter++) {
        
        perfectNumber = pow(2, counter - 1) * (pow(2, counter) - 1);

        // Se o numero perfeito calculado for igual ao proprio numero, entao ele eh perfeito
        if (perfectNumber == number) {
            isPerfect = 1;
            break;
        }
    }
    printf("\n\n");

    return isPerfect;
}

