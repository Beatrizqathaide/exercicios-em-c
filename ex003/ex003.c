/*
Implemente ou crie um programa em C que receba do usuário dez temperaturas em graus Farenheit, transforme-as em graus Celsius e armazene os resultados em um vetor. Terminada a entrada de dados, os valores armazenados devem ser apresentados. Obs.: A fórmula é C = (F – 32) * 5 / 9.
Explicação
Crie um vetor de nome temp de tamanho 10 do tipo float ;
Crie uma variável de nome contador(Essa variável não vai permitir que seja digitado mais de 10 temperaturas);
Ao mostrar os resultados no printf() do segundo for, coloque a fórmula para converter as temperaturas de Farenheit para graus Celsius.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    float temp[10];
    int cont;

    setlocale(LC_ALL, "portuguese");

    for (cont = 1; cont <= 10; cont++) {
        printf("Digite a Temperatura: ");
        scanf("%f", &temp[cont]);
    }
    
    for(cont=1;cont<=10;cont++)
  {
     printf("\n %d° Temperatura em Graus Celsius = %.1f", cont, ((temp[cont]-32)) * 5 / 9);

  }
  printf("\n");
}