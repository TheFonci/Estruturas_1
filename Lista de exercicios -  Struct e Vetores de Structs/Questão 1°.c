#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[30], cargo[30];
    float salario;
    int identificador;
    
}Funcionario;
void preencher(Funcionario **funcionario, int n){
    for (int i = 0; i < n; i++){

      printf("\n\tFuncionario %i\n", i+1);

      printf("Nome: \n");
      scanf(" %[^\n]s", funcionario[i]->nome);
      printf("Salario: \n");
      scanf("%f", &funcionario[i]->salario);
      printf("Identifiador: \n");
      scanf("%i", &funcionario[i]->identificador);
      printf("Cargo: \n");
      scanf(" %[^\n]s", funcionario[i]->cargo);
    }
}
void imprimir(Funcionario **funcionario, int n){
        printf("\n**Funcionario cadastratos**:");
    for (int i = 0; i < n; i++){
      printf("Funcionario %i", i+1);
      printf("Nome: %s\n", funcionario[1]->nome);
      printf("Salario: R$%.2f\n", funcionario[i]->salario);
      printf("Identificador: %i\n", funcionario[i]->identificador);
      printf("Cargo: %s\n", funcionario[i]->cargo);   
    }
}
void mudar_salario(Funcionario **funcionario, int n){
    for (int i = 0; i < n; i++){
      printf("Informe o novo saldo salarial do funcionario %i: R$", i+1);
      scanf("%f", &funcionario[i]->salario);
    }
}
void Maioremenor(Funcionario **funcionario, int n){
   int i, maior, menor;
   maior = 0;
   menor = 0;
     for (int i = 0; i < n; i++){
     if(funcionario[i]->salario > funcionario[maior]->salario){
        maior = i;
    }
     if(funcionario[i]->salario < funcionario[menor]->salario){
        menor = i;
    }
  }
      printf("O maior salario e: R$%.2f", funcionario[maior]->salario);
      printf("O menor salario e: R$%.2f", funcionario[menor]->salario);
}
int main(void){
  int n;
      printf("Digite a quantidade de funcionarios: \n");
      scanf("%i", &n);
  Funcionario **funcionario = (Funcionario**) malloc(n * sizeof(Funcionario*));
     if(funcionario == NULL){
        printf("Memoria insuficiente!");
        exit(1);
     }
     for(int i = 0; i < n; i++){
        funcionario[i] = (Funcionario*) malloc(n * sizeof(Funcionario));
     }
     preencher(funcionario, n);
     imprimir(funcionario, n);
     mudar_salario(funcionario, n);
     Maioremenor(funcionario, n);
     for(int i = 0; i < n; i++){
        free(funcionario[i]);
     }
     free(funcionario);
     return 0;
}

