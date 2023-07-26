#include<stdio.h>
#include<stdlib.h>

typedef enum Genero {MASCULINO, FEMININO}genero;

typedef struct{
    char nome[20];
    int idade;
    genero Genero;
}Pessoa;

int main(void){
    Pessoa pessoa;
    enum Genero genero;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", pessoa.nome);
    printf("Informe sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Informe seu genero, 1 para masculino e 0 para feminino: ");
    scanf("%d", &pessoa.Genero);
    if (genero == 1){
        printf("Masculino!");
    }
    else{
        printf("Feminino!");
    }
return 0;
}
