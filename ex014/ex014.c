/*
Faça uma função que receba por parâmetro a altura e o sexo de uma pessoa e retorne o peso ideal dela. O cálculo do peso ideal pode ser feito da seguinte forma: Fórmula para homens: 72,2 * altura - 58; Fórmula para mulheres: 62,1 * altura - 44,7.
*/

#include <stdio.h>

float pesoIdeal(float altura, char sexo[]) {
    float peso;
    if (sexo == "Masculino") {
        peso = 72.2 * altura - 58;     
    }
    else {
        peso = 62.1 * altura - 44.7;
    }
    return peso;
}

int main() {
    float altura, peso;
    char sexo[10];

    printf("Digite sua altura: ");
    scanf("%f%*c", &altura);

    printf("Digite seu sexo: ");
    scanf("%[^\n]%*c", sexo);

    peso = pesoIdeal(altura, sexo);
    printf("\nSeu peso ideal é: %.2f kg\n\n", peso);
}