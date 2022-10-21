/*
Escreva um trecho de código para fazer a criação de um registro horario com os seguintes campos: horas, minutos e segundos.
*/
#include <stdio.h>

struct horario {
    int horas;
    int minutos;
    int segundos;
};

int main() {
    struct horario horarios;
   
    printf("Digite a hora: ");
    scanf("%d%*c", &horarios.horas);

    printf("Digite o minuto: ");
    scanf("%d%*c", &horarios.minutos);

    printf("Digite o segundo: ");
    scanf("%d%*c", &horarios.segundos);

    printf("\nHorário: %d:%d:%d\n\n", horarios.horas, horarios.minutos, horarios.segundos);
}