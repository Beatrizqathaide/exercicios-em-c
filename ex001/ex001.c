/*
Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade atual dessa pessoa.
b) quantos anos ela terá em 2038.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    int anoNascimento, anoAtual, idade, novaIdade;

    setlocale(LC_ALL, "Portuguese");

    printf("\nDigite seu Ano de Nascimento: ");
    scanf("%d", &anoNascimento);

    printf("\nDigite o Ano Atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;
    printf("\nSua idade atual é: %d anos.\n", idade);

    novaIdade = 2038 - anoNascimento;
    printf("Em 2038 você sua idade será %d anos.\n", novaIdade);

}