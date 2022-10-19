/*
Faça um programa que leia 3 valores numéricos via teclado e ao final indique qual o maior dos digitados pelo
*/

#include <stdio.h>

int main() {
    float num1, num2, num3, maior;
    
    printf("Digite 3 valores\n");
    printf("1° Número: ");
    scanf("%f%*c", &num1);
    printf("2° Número: ");
    scanf("%f%*c", &num2);
    printf("3° Número: ");
    scanf("%f%*c", &num3);

    if (num1 > num2 && num1 > num3) {
        maior = num1;
    }
    else if (num2 > num1 && num2 > num3) {
        maior = num2;
    }
    else if (num3 > num1 && num3 > num1) {
        maior = num3;
    }
    
    printf("o MAIOR valor é %.2f\n", maior);

}