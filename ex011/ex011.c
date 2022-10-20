/*
Construa uma estrutura aluno com nome, número de matrícula e curso.
*/

#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[100];
    int matricula;
    char curso[50];
};


int main() {
    struct aluno primeiroAluno;

    printf("Digite o nome: ");
    scanf("%[^\n]%*c", primeiroAluno.nome);

    printf("Digite o número de matrícula: ");
    scanf("%d%*c", &primeiroAluno.matricula);

    printf("Digite seu curso: ");
    scanf("%[^\n]%*c", primeiroAluno.curso);
    
    printf("- Nome: %s\n", primeiroAluno.nome);
    printf("- Número de Matrícula: %d\n", primeiroAluno.matricula);
    printf("- Curso: %s\n\n", primeiroAluno.curso);

}