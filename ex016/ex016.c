/*
Escreva um procedimento que receba 3 valores reais x, y e z que representam os lados de um triângulo e retorne qual é o tipo do triângulo formado observando as seguintes definições: 
* Triângulo equilátero: os comprimentos dos 3 lados são iguais.
* Triângulo isósceles: os comprimentos de 2 dos lados são iguais.
* Triângulo escaleno: os comprimentos dos 3 lados são diferentes.
*/

#include <stdio.h>
#include <string.h>

float verificaTriangulo(float x, float y, float z) {
    
    if (x == y && x == z) {
        printf("Triângulo Equilátero\n");
    }

    else if (x != y && x != z && y != z) {
        printf("Triângulo Escaleno\n");
    }

    else {
        printf("Triângulo Isósceles\n");
    }
     
}

int main() {
    float lado1, lado2, lado3;

    printf("Digite o lado 1:");
    scanf("%f%*c", &lado1);

    printf("Digite o lado 2:");
    scanf("%f%*c", &lado2);

    printf("Digite o lado 3:");
    scanf("%f%*c", &lado3);

    verificaTriangulo(lado1, lado2, lado3);
    //printf("Seu triângulo é: %d\n", triangulo);
}