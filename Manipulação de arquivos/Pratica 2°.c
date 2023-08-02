#include<stdio.h>
int main(void){
    FILE *fp;
    int c;

    fp = fopen("nome.txt", "r");
    if(fp == NULL){
        printf("Erro ao abrir aarquivo!");
      exit(1);
    }
    c = fgetc(fp);
    printf("%c\n", c);
    fclose(fp);
      return 0;
}