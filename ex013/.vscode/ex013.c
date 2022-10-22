/*
Implemente um programa que leia o nome , a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura.
*/

#include <stdio.h>
#include <string.h>

struct cadastro {
    char nome[100];
    int idade;
    char endereco[50];
};

int main() {
    struct cadastro censo;

    printf("Digite seu Nome: ");
    scanf("%[^\n]%*c", censo.nome);

    printf("Digite sua Idade: ");
    scanf("%d%*c", &censo.idade);

    printf("Digite seu Endereço: ");
    scanf("%[^\n]%*c", censo.endereco);
    
}