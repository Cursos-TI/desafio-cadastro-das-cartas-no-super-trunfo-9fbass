#include <stdio.h>


int main(){


    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;


    printf("Digite o primeiro número: \n");
    scanf("%d", &numero1);

    printf("Digite o segundo número: \n");
    scanf("%d", &numero2);
    

        //operação soma
    soma = numero1 + numero2;

        //operação subtração
    subtracao = numero1 - numero2;

        //operação multiplicação
    multiplicacao = numero1 * numero2;

        //operação divisão
    divisao = numero1 / numero2;


    printf("A soma dos números é: %d\n", soma);
    printf("A subtração dos números é: %d\n", subtracao);
    printf("A mutiplicação dos números é: %d\n", multiplicacao);
    printf("A divisão dos números é: %d\n", divisao);



    return 0;


}