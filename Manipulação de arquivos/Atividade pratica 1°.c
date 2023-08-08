#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int id;
    char nome[21];
    float salario;
}Dados;

int main(void){

    FILE* arquivo;
    arquivo = fopen("arquivo_dados.txt", "w");
    Dados dados;

    printf("Informe os seguintes dados\n");
    printf("ID: ");
    scanf("%i", &dados.id);
    printf("Nome: ");
    scanf(" %[^\n]", dados.nome);
    printf("Salario: ");
    scanf("%f", &dados.salario);

    fprintf(arquivo, "ID: %i\tNome: %s\tSalario: %.2f\n", dados.id, dados.nome, dados.salario);
    fclose(arquivo);
    return 0;
}