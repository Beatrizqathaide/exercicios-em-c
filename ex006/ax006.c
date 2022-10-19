/*
Faça um programa que leia um valor numérico inserido por um usuário e atribua ele para uma variável  e depois imprima o dado presente nessa variável.
*/

#include <stdio.h>
//Como o tipo numérico não foi definido, uma idéia é usar float q pode servir para inteiros e decimais

int main () {
    float num;

    printf("Digite um valor: ");
    scanf("%f%*c", &num);

    printf("\nO valor digitado foi: %.2f\n", num);

}