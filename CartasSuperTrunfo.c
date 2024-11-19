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
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turismo;
    float media1;
    float media2;
    

    printf("Digite a inicial do estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n"); 
    scanf(" %[^\n]", cidade);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turismo);


    media1 = (float) populacao / area;

    media2 = (float) pib / populacao;



    printf("\n" "*** Carta Cadastrada ***\n");
    printf("\n" "Inicial do estado: %c\n", estado);
    printf("Código da carta: %c%s\n", estado, codigo);
    printf("Nome da cidade: %s\n", cidade);    
    printf("Número da população: %d\n", populacao);
    printf("Tamanho da área: %.2f km² \n", area);
    printf("Densidade populacional: %.2f pessoas/km² \n", media1);
    printf("Valor do PIB: R$ %.2f\n", pib); 
    printf("PIB per Capita: R$ %.2f\n", media2);
    printf("Número de pontos turisticos: %d\n", turismo);

    printf("\n");

    return 0;
}
