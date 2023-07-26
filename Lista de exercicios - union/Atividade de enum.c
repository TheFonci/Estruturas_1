#include<stdio.h>
#include<stdlib.h>

typedef enum Genero {MASCULINO, FEMININO}genero;

typedef struct Pessoa{
    char nome[20];
    int idade;
    genero Genero;
}pessoa;

int main(void){
    pessoa Pessoa;
    enum Genero genero;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", Pessoa.nome);
    printf("Informe sua idade: ");
    scanf("%d", &Pessoa.idade);
    printf("Informe seu genero, 1 para masculino e 0 para feminino: ");
    scanf("%d", &Pessoa.Genero);
    if (genero == 1){
        printf("Masculino!");
    }
    else{
        printf("Feminino!");
    }
return 0;
}
