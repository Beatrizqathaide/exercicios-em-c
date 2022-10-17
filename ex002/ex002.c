/*
Crie um programa que leia um valor de hora e informe quantos minutos se passaram desde o início do dia.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    int hora, minutos;

    setlocale(LC_ALL, "portuguese");

    printf("\nInforme a hora: ");
    scanf("%d", &hora);

    minutos = hora * 60;
    printf("Desde o início do dia até agora se passaram %d minutos.\n", minutos);
}