    #include <stdio.h>
    int main(void) {
     int a, b, c, d;
     int *p1;
     int *p2 = &a; //A variavel '*p2' se inicia recebendo o endereço da variavel 'a'.
     int *p3 = &c; //A variavel '*p3' se inicia recebendo o endereço da variavel 'c'.
     p1 = p2; //A variavel 'p1' está recebendo a variavel de 'p2'.
     *p2 = 10; // O conteudo de '*p2' recebe 10.
     b = 20;
     int **pp; // declarado um ponteiro de um ponteiro.
     pp = &p1; // A variavel 'pp' rebeve o endereço de 'p1'
     *p3 = **pp; //O endereço que 'p3' aponta recebe o valor que 'pp' está apontando.
     int *p4 = &d; // Uma variavel de ponteiro e iniciada com o endereço da variavel 'd'
     *p4 = b + (*p1)++; // 'p4' recebe o valor de 'b'(20) e soma com o valor de 'p1'(10).
     printf("%d\t%d\t%d\t%d\n", a, b, c, d);
    return 0;
    }