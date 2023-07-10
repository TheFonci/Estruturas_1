#include<stdio.h>
#include<math.h>

 void calcula_hexagono(float l, float *area, float *perimetro){
   
   *area = (3 * pow(l,2) * sqrt(3))/2;
   *perimetro = 6 * l;
 }

 int main(void){
    float area, perimetro, l;
     printf("informe o lado do hexagono: ");
     scanf("%f", &l);
     calcula_hexagono(l, &area, &perimetro);
    
    printf("A area do exagono eh: %.2f\n", area);
    printf( "e o perimetro: %.2f\n", perimetro);
    return 0;
 }