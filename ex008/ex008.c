/*
Crie uma função que transforma todos os caracteres de uma string em maiúsculos.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Função que transforma em MAIÚSCULO
void transformaEmMaiusculas(char palavra[], char transformada[]) {
    int cont = 0;

    while (palavra[cont] != '\0') { //enquanto cada letra não for o último
        transformada[cont] = toupper(palavra[cont]); //toupper: função que transforma em MAIÚSCULA
        cont++;
    }
    transformada[cont] = '\0'; // finaliza a string
}

//Aproveitando: Função que transforma em MINÚSCULO
void transformaEmMinusculas(char palavra[], char transformada[]) {
    int cont = 0;

    while (palavra[cont] != '\0') { //enquanto cada letra não for o último
        transformada[cont] = tolower(palavra[cont]); //tolower: função que transforma em MINÚSCULA
        cont++;
    }
    transformada[cont] = '\0'; // finaliza a string
}

int main() {
    char palavras[100]; //string para tranformar
    char transformada[100]; //string transformada

    printf("Digite uma palavra: ");
    scanf("%[^\n]%*c", palavras); // [^\n] = ler string

    printf("\nSua palavra é %s\n", palavras); // %s = para imprimir a string

    transformaEmMaiusculas(palavras, transformada);
    printf("\nAgora em Maiúsculas: %s\n", transformada);

    transformaEmMinusculas(palavras, transformada);
    printf("\nVoltando para Minúsculas: %s\n", palavras);
}