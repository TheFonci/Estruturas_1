#include<stdio.h>
#include<stdlib.h>

typedef enum{
    Zero,
    Janeiro,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro,
}Meses;

typedef struct{
    int dia;
    Meses meses;
    int ano;
}Data;

 int main(void){
    Data data;

    printf("Informe o dia: \n");
    scanf("%i", &data.dia);
    printf("Informe o mês: \n");
    scanf("%d", &data.meses);
    printf("Informe o ano: \n");
    scanf("%i", &data.ano);

    switch (data.meses){
        case 1:
        printf("%i/jAN/%i", data.dia, data.ano);
        break;
        case 2:
        printf("%i/Fev/%i", data.dia, data.ano);
        break;
        case 3:
        printf("%i/Mar/%i", data.dia, data.ano);
        break;
        case 4:
        printf("%i/Abr/%i", data.dia, data.ano);
        break;
        case 5:
        printf("%i/Mai/%i", data.dia, data.ano);
        break;
        case 6:
        printf("%i/jun/%i", data.dia, data.ano);
        break;
        case 7:
        printf("%i/jul/%i", data.dia, data.ano);
        break;
        case 8:
        printf("%i/Ago/%i", data.dia, data.ano);
        break;
        case 9:
        printf("%i/Set/%i", data.dia, data.ano);
        break;
        case 10:
        printf("%i/Out/%i", data.dia, data.ano);
        break;
        case 11:
        printf("%i/Nov/%i", data.dia, data.ano);
        break;
        case 12:
        printf("%i/Dez/%i", data.dia, data.ano);
        break;

    default:
        break;
    }
    return 0;
 }