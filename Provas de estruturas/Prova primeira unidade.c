#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[50], diciplina[50];
    float horas;
}Professor;
int preencher(Professor *professor, int n){
  int i;
  for(i = 0; i < n; i++){
    printf("Informe os dados do professor:\n");

    printf("Nome: \n");
    scanf(" [^\n]", professor[i].nome);
    printf("Diciplina: \n");
    scanf(" [^\n]", professor[i].diciplina);
    printf("Carga horaria: \n");
    scanf("%f", &professor[i].horas);
    }   
}
int imprimir(Professor *professor, int n){
  int i;
  for(i = 0; i < n; i++){
    printf("Dados do professor: \n");

    printf("Nome: %s", professor[i].nome);
    printf("Diciplina: %s", professor[i].diciplina);
    printf("Carga horaria: %f", professor[i].horas);
  }  
}
int mudar_horas(Professor *professor, int n){
  int i;
  for(i = 0; i < n; i++){
      printf("Informe a nova carga horaria: \n");
      scanf("%f", &professor[i].horas);
  }
}
int main(void){
    Professor *professor;
    preencher;
    imprimir;
    mudar_horas;
  return 0;
}