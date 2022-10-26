/*
Crie um programa que receba um número do usuário e imprima na tela a tabuada de 0 a 10 desse mesmo número. Utilize uma função para o cálculo da tabuada.
*/

#include <stdio.h>

int tabuada(int numero) {
    int cont, resultado;
    
    cont = 1;

    while (cont <= 10) {
        resultado = numero * cont;
        printf("%d x %d = %d\n", numero, cont, resultado);
        cont++;
    }
    
}

int main() {
    int valor;

    printf("Digite um número para ver a tabuada: ");
    scanf("%d%*c", &valor);

    tabuada(valor);
}