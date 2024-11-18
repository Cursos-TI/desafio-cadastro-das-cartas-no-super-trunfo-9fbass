#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado;
    int cidade;
    int populacao;
    int area;
    int pib;
    int turismo;

printf("Digite a inicial do estado: \n");
scanf("%c", &estado);

printf("Digite o número da cidade: \n");
scanf("%d", &cidade);

printf("Digite o número da população: \n");
scanf("%d", &populacao);

printf("Digite o tamanho da área: \n");
scanf("%d", &area);

printf("Digite o número do PIB: \n");
scanf("%d", &pib);

printf("Digite o número de pontos turisticos: \n");
scanf("%d", &turismo);


printf("inicial do estado: %c - número da cidade: %d\n", estado, cidade);
printf("número da população: %d - tamanho da área: %d\n", populacao, area);
printf("número de PIB: %d - número de pontos turisticos: %d\n", pib, turismo);


    return 0;
}
