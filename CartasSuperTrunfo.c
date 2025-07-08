#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Liandra



int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char cidade[20], cidade_2[20];
    int codigo_cidade, codigo_cidade_2;
    int populacao, populacao_2;
    float area, area_2;
    float pib, pib_2;
    int pontos_turisticos, pontos_turisticos_2;
    float densidade_populacional;
    float pib_per_capita;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*****Cadastro da Cidade_1*****\n");
    printf("Digite o Código da Cidade abaixo e pressione Enter:\n");
    scanf("%d", &codigo_cidade);
    printf("Digite o Nome da Cidade abaixo e pressione Enter:\n");
    scanf("%s", &cidade);
    printf("Digite a QTD da População abaixo e pressione Enter:\n");
    scanf("%d", &populacao);
    printf("Digite a Área da Cidade abaixo e pressione Enter:\n");
    scanf("%f", &area);
    printf("Digite o PIB da Cidade abaixo e pressione Enter:\n");
    scanf("%f", &pib);
    printf("Digite a QTD de Pontos Turísticos da Cidade abaixo e pressione Enter:\n");
    scanf("%d", &pontos_turisticos);


    printf("\n*****Cadastro da Cidade_2*****\n");
    printf("Digite o Código da Cidade abaixo e pressione Enter:\n");
    scanf("%d", &codigo_cidade_2);
    printf("Digite o Nome da Cidade abaixo e pressione Enter:\n");
    scanf("%s", &cidade_2);
    printf("Digite a QTD da População abaixo e pressione Enter:\n");
    scanf("%d", &populacao_2);
    printf("Digite a Área da Cidade abaixo e pressione Enter:\n");
    scanf("%f", &area_2);
    printf("Digite o PIB da Cidade abaixo e pressione Enter:\n");
    scanf("%f", &pib_2);
    printf("Digite a QTD de Pontos Turísticos da Cidade abaixo e pressione Enter:\n");
    scanf("%d", &pontos_turisticos_2);




    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\n*****Cidade_1*****\n");
    printf("Código da Cidade: %d\n", codigo_cidade);
    printf("Nome da Cidade: %s\n", cidade);
    printf("QTD da População: %d\n", populacao);
    printf("Tamanho da Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("QTD de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional:%f\n",populacao/area);
    printf("PIB per Capita:%f\n",pib/populacao);
    

    printf("\n\n\n*****Cidade_2*****\n");
    printf("Código da Cidade: %d\n", codigo_cidade_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("QTD da População: %d\n", populacao_2);
    printf("Tamanho da Área: %f\n", area_2);
    printf("PIB: %f\n", pib_2);
    printf("QTD de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional:%f\n",populacao_2/area_2);
    printf("PIB per Capita:%f\n",pib_2/populacao_2);
    



return 0;
}
