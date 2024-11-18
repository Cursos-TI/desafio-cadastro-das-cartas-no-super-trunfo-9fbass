#include <stdio.h>


int main(){


    /*
    int a = 10;
    int b = 3;
    int soma = a + b; 
    int diferenca = a - b;
    int produto = a *b;
    int quociente = a / b;  //note que a divisão de inteiros resulta em numeros inteiros
    */


   /*
   float x = 5.5;
   float y = 2.2;
   float soma = x + y;
   float diferença = x - Y;
   float produto = x * y;
   float quociente = x / y; (divisão de pontos flutuantes)
   */


    /* 
    int a = 10;
    int b = 3;
     float quociente = (float) a / b;

OBS1: Ao usar "float quociente" antes do "=", 
eu determino que o formato da resposta será em ponto flutuante.

OBS2: Ao usar "(float)" depois do "=", 
eu determino que a resposta em si, será em ponto flutuante, mesmo que ambas sejam "int"


*/

    int a = 10;
    float b = 3.5;
    float resultado = a + b;

    printf("Resultado: %.2f\n", resultado);
    // Ao colocal o ".2" entre "%f", determina que o resultado será mostrado em ponto flutuante com apenas 2 casas.





return 0;


}