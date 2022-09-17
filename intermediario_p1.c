/*
1) Crie uma função que receba as coordenadas (x,y) de 3 pontos, (A, B, C), e retorne o
angulo entre elas ∠ABC.
*/
// https://www.programiz.com/c-programming/library-function/math.h/atan2#:~:text=Function%20atan2()%20takes%20two,in%20radians%20for%20the%20quadrant.&text=Two%20other%20functions%20atan2f(),h>%20header%20file.

#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;


double angle_3points(Point p1, Point p2, Point p3);

Point p1;
Point p2;
Point p3;

int main() {
    /*
    P1 = (x=2, y=50)
    P2 = (x=9, y=40)
    P3 = (x=5, y=20)
    */

    p1.x = 2;
    p1.x = 50;

    p2.x = 9;
    p2.y = 40;

    p3.x = 5;
    p3.y = 20;

    printf("P1 (%.2f, %.2f) - ", p1.x, p1.y);
    printf("P2 (%.2f, %.2f) - ", p2.x, p2.y);
    printf("P3 (%.2f, %.2f)\n", p3.x, p3.y);
    printf("Angulo: %.5f\n", angle_3points(p1, p2, p3));

    return 0;
}

double angle_3points(Point p1, Point p2, Point p3) {
    double result = atan2(p3.y - p1.y, p3.x - p1.x) - atan2(p2.y - p1.y, p2.x - p1.x);
    return result;
}

