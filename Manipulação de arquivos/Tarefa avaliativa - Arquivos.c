  /*Questão 1) Alfredo é dono de uma empresa que, nos últimos meses, apresentou algumas
  irregularidades na folha de pagamento de alguns departamentos. O empresário mantém
  sempre atualizada a relação de seus funcionários em um arquivo, mas não consegue uma
  forma prática de descobrir quanto gasta com a folha de pagamento por departamento da sua
  empresa. Dessa forma, você foi recrutado para ajudar Alfredo com este problema. Você deve
  escrever um programa em C que, dado o arquivo com a relação de funcionários, imprima o
  valor gasto com a folha de pagamento para um determinado departamento. Os dados dos
  funcionários da empresa devem ser fornecidos para um vetor, de modo que uma função que
  execute tal tarefa deve ser implementada, obedecendo ao protótipo:
  void copia_dados(FILE* fl, int n, Funcionario** pessoal);
  Em seguida, você deve implementar uma função que imprime o valor gasto para um
  determinado departamento. Esta função deve obedecer ao seguinte protótipo:
  void imprime_folha_pagamento(int n, Funcionario** pessoal, char depto);
  O formato do arquivo texto é mostrado a seguir (funcional, nome, departamento e salário, e
  cada informação em uma linha é separada por um caractere de tabulação ‘\t’) e a primeira
  linha do arquivo representa o número de funcionários da empresa. A segunda figura mostra
  uma possível saída do programa caso haja as seguintes chamadas da função
  imprime_folha_pagamento:
  imprime_folha_pagamento(num_func, pessoal, 'A');
  imprime_folha_pagamento(num_func, pessoal, 'B');
  imprime_folha_pagamento(num_func, pessoal, 'C');*/

  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>

  typedef struct{
      char funcional[30];
      char departamento[30];
      float salario;
      char nome[30];
  }Funcionario;
  void copiar_dados(FILE* fl, int n, Funcionario** pessoal);
  void imprime_folha_pagamento(int n, Funcionario** pessoal, char depto);
  int main(void){
      char linha[200];
      int n;
      Funcionario** pessoal;
      FILE * arquivo_de_entrada;
      int i;
      i = 0;
  arquivo_de_entrada = fopen("Entrada_exe.txt", "w");
    if(arquivo_de_entrada == NULL){
    printf("Arquivo nao encontrado\n");
    exit(1);
    }
    fgets(linha, 200, arquivo_de_entrada);
    scanf(linha, "%i", &n);
    printf("Numero de funcionarios: %i\n", n);
  pessoal = (Funcionario**) malloc(n*sizeof(Funcionario*));
    for(i = 0; i < n; i++){
    pessoal[i] = (Funcionario*) malloc(sizeof(Funcionario));
    }
    printf("\nCopiando dados do arquivo\n");
    copiar_dados(arquivo_de_entrada, n, pessoal);
    printf("Dados copiados com exito!\n");
    imprime_folha_pagamento(n, pessoal, 'A');
    imprime_folha_pagamento(n, pessoal, 'B');
    imprime_folha_pagamento(n, pessoal, 'C');
    fclose(arquivo_de_entrada);
    for(i = 0; i < n; i++){
      free(pessoal[i]);
    }
    free(pessoal);
    return 0;
  }
  void copiar_dados(FILE* fl, int n, Funcionario** pessoal){
      int i = 0;
      while(!feof(fl)){
      if(i == 0){
      fscanf(fl, "%i", &n);
      }
      else{
      fscanf(fl, "%[^\t]\t%[^\t]\t%c\t%f ", pessoal[i-1]->funcional, pessoal[i-1]->nome, &pessoal[i-1]->salario);
      }
      i++;
    }
  }
  void imprime_folha_pagamento(int n, Funcionario** pessoal, char depto){
      int i;
      for(i = 0; i < n; i++);
      printf("Folha de pagamento do departamento %c\n", depto);
      printf("Funional\tNome\tDepartamento\tSalario\n");
          while(i < n){
            if(pessoal[i]->departamento, depto == 0){
              printf("%s\t\t%s\t\t%c\t\t%.2f\n", pessoal[i]->funcional, pessoal[i]->nome, pessoal[i]->departamento, pessoal[i]->salario);
            }
          }
  }
