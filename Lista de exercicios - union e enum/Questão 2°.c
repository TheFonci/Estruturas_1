#include<stdio.h>
#include<stdlib.h>

typedef union{
    char Alimento[20];
    char Bebida[20];
    char Eletronico[20];
}Tipo;

typedef struct{
    char Nome[30];
    float Valor;
    Tipo tipo;
}Produto;

int main(void){
    Produto produto;

    printf("Informe o nome do produto: ");
    scanf(" %[^\n]", produto.Nome);
    printf("Valor do produto: ");
    scanf("%f", &produto.Valor);
    printf("Tipo do produto:\n Alimento \n Bebida \n Eletronico\n");
    scanf(" %[^\n]", produto.tipo.Alimento);

    printf("-->DADOS DOS PRODUTOS<--");
    printf("\n Nome do produto: %s", produto.Nome);
    printf("\n Valor do produto: %.2f", produto.Valor);
    printf("\n Tipo do produto: %s", produto.tipo.Alimento);

return 0;
}