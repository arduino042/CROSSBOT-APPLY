/*
2) Crie uma função que receba uma temperatura em graus fahrenheit e retorne a
temperatura em graus Celsius.

Chamada da função:
converte_temperatura(77.2);

Saída:
25.11
*/

#include <stdio.h>
#include <stdlib.h>

// Formula pra transforma fahrenheit pra celsius
// (32 °F − 32) × 5/9 = 0 °C
void fahrenheit2celsius(float fahrenheit);

int main() {
    
    fahrenheit2celsius(32);
    fahrenheit2celsius(55);
    fahrenheit2celsius(67.9);
    fahrenheit2celsius(80);

    return 0;
}

void fahrenheit2celsius(float fahrenheit) {
    // (32 °F − 32) × 5/9 = 0 °C
    float celsius = (fahrenheit - 32) * 5 / 9;

    // Possui uma precisao de 3 digitos pra exibir o valor ao usuario
    printf("\nFahrenheit %.3f - Celsius %.3f\n", fahrenheit, celsius);
}
