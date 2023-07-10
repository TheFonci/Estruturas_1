#include<stdio.h>
   
   int main(void){
    int x, *p;
     x = 100;
     p = &x;
     printf("Valor de p = %p\tValor de *p = %d", p, *p);
     return 0;

    }
    //Se tentarmos compilar o programa (não o compile ainda), você acha que o compilador nos
//fornece alguma mensagem? Se sim, responda:
//a) Esta mensagem é de erro ou advertência? R: Nenhuma das duas, será exibido o endereço da variavel x e o conteudo dela.
//b) Por que o compilador emite tal mensagem? R: por causa do printf
//c) Compile e execute o programa. A execução foi bem sucedida? R: sim
//d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida
//pelo compilador. R: basta apagar a linha do printf.
//e) Compile e execute novamente o programa. A execução foi bem sucedida? R: Sim, porém nenhuma mensagem é exibida.