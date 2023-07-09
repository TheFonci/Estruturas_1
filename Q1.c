    #include<stdio.h>

  int main(void){
    int x, y, *p; //Alocando as variaveis com uma variavel de ponteiro.
   y = 0; // Atribuindo o valor de zero a variavel y.
   p = &y; // A variavel p (ponteiro) recebe o endereço da variavel y.
   x = *p; // A variavel x recebe o conteudo do endereço a qual a variavel p(ponteiro) está apontando.
   x = 4; // A variavel x agora recebe quatro.
  (*p)++; // O conteudo da variavel p(ponteiro) recebe mais um.
  --x; // O valor da variavel x decrementa em um.
  (*p) += x; // O conteudo da variavel p(ponteiro) recebe o valor da variavel x.
  printf("%i, %i, %i", x, y, *p); // os valores finais de x, y e p são três quatro e quatro.
 return 0;
}
