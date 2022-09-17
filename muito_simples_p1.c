/*
Problema:

1) Crie uma função que recebe dois pontos
do plano cartesiano e retorna a distância entre eles.

Chamada da função:
distancia([1,2],[5,6]);

Saída:
5.65685 */

#include <stdio.h>
#include <math.h>

// Foi utilizado o tipo de dado float pois em C esse tipo de dado possui
// uma precisao de 8 digitos, numeros reais no entre 10^-38 e 10^38
typedef struct {
    float first;
    float second;
} Vector;

// Funcao para calcular a Distância entre dois
// pontos AB é igual a raiz de (Xa - Ya)^2 + (Xb - Yb)^2
float calculate_distance(Vector x, Vector y);

// Funcao para testar os valores, insina os valores do vetores aqui
// E a funcao vai te retornar a Distancia entre eles
void test_values(float vector_xa, float vector_xb, float vector_ya, float vector_yb);

Vector x, y;

// Aqui na funcao Main voce podera usar a funcao test_values para
// inserir os valores aos vetores na seguinte ordem (Xa, Xb, Ya, Yb)
int main() {

    test_values(3, 4, 4, 3);
    test_values(3, 5, 6, 1);
    test_values(4, 4.5, 9, 4.5);
    test_values(1, 2, 5, 6);

    return 0;
}

void test_values(float vx_a, float vx_b, float vy_a, float vy_b) {
    x.first = vx_a;
    x.second = vx_b;

    y.first = vy_a;
    y.second = vy_b;

    printf("\n Vetor A (%.2f, %.2f) ", x.first, x.second);
    printf("- Vetor B (%.2f, %.2f)\n", y.first, y.second);
    printf("\tDistancia D = %.5f\n----------\n", calculate_distance(x, y));
}

float calculate_distance(Vector x, Vector y) {
    float aux = pow(x.first - y.first, 2) + pow(x.second - y.second, 2);
    return sqrt(aux);
}
