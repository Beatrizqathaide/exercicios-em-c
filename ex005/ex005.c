/*
Faça um programa que: Leia a idade do usuário. Imprima essa idade da seguinte forma: “A sua idade é: ”. Não se esqueça de quebrar uma linha no ato de impressão.
*/

#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d%*c", &idade);

    printf("\nA sua idade é: %d anos.\n\n", idade);
}