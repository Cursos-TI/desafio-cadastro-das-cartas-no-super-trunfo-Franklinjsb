#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Liandra



int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   // char estado;
    char cidade[20], cidade_2[20];
    int codigo_cidade, codigo_cidade_2;
    int populacao, populacao_2;
    float area, area_2;
    float pib, pib_2;
    int pontos_turisticos, pontos_turisticos_2;
    float densidade_populacional, densidade_populacional_2;
    float pib_per_capita, pib_per_capita_2;
    float super_poder, super_poder_2;
    int poder_mais_forte;

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

    // Cáculo dos atributos da Carta 1:
    densidade_populacional = populacao/area;
    pib_per_capita = pib/populacao;
    super_poder = populacao + area + pib + pib_per_capita + pontos_turisticos +( 1/densidade_populacional);


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

    // Cáculo dos atributos da Carta 2:
    densidade_populacional_2 = populacao_2/area_2;
    pib_per_capita_2 = pib_2/populacao_2;
    super_poder_2 = populacao_2 + area_2 + pib_2 + pib_per_capita_2 + pontos_turisticos_2 +( 1/densidade_populacional_2);
    
    

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
    printf("Densidade Populacional: %f\n", densidade_populacional);
    printf("PIB per Capita: %f\n",pib_per_capita);
    printf("Super Poder: %f\n",super_poder);
    

    printf("\n\n*****Cidade_2*****\n");
    printf("Código da Cidade: %d\n", codigo_cidade_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("QTD da População: %d\n", populacao_2);
    printf("Tamanho da Área: %f\n", area_2);
    printf("PIB: %f\n", pib_2);
    printf("QTD de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %f\n",densidade_populacional_2);
    printf("PIB per Capita: %f\n",pib_per_capita_2);
    printf("Super Poder: %f\n\n",super_poder_2);
    

    // Exibição da comparação de poderes:
    printf("\n\n*****Comparação de Super Poderes*****\n");
    printf("População maior: %d\n", poder_mais_forte = populacao > populacao_2);
    printf("Área maior: %d\n", poder_mais_forte = area > area_2);
    printf("Pib maior: %d\n", poder_mais_forte = pib > pib_2);
    printf("Mais Pontos Turísticos: %d\n", poder_mais_forte = pontos_turisticos > pontos_turisticos_2);
    printf("Densidade Populacional menor: %d\n", poder_mais_forte = densidade_populacional < densidade_populacional_2);
    printf("Pib per capita maior: %d\n", poder_mais_forte = pib_per_capita > pib_per_capita_2);
    printf("Carta com maior Super Poder: %d\n", poder_mais_forte = super_poder > super_poder_2);


return 0;
}
