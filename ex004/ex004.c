/*
Faça um programa que receba como dados uma determinada hora e minuto de um usuário e imprima a frase “Agora são exatamente” seguida desses dados no formato convencional de horário “horas:minutos”.
*/

#include <stdio.h>

int main() {
    int hora;
    int minuto;

    printf("Digite a hora: ");
    scanf("%d%*c", &hora);
    printf("Digite o minuto: ");
    scanf("%d%*c", &minuto);

    printf("\nAgora são exatamente %d:%d\n", hora, minuto);

}