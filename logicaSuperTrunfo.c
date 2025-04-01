#include <stdio.h>


int main() {
   
    printf("Lógica Super Trunfo!");

    char estado;

    char codigo[3];

    char cidade[30];

    int populacao;

    float area, pib;

    int turismo;

    // Cadastro da Carta 1 //

    printf("Carta1\n");

    printf("Insira o estado:\n");
    scanf("%c", &estado);

    printf("Insira o codigo:\n");
    scanf("%s", codigo);

    printf("Insira a cidade:\n");
    scanf("%s", cidade);

    printf("Insira a populacao:\n");
    scanf("%d", &populacao);

    printf("Insira a area:\n");
    scanf("%f", &area);

    printf("Insira o PIB:\n");
    scanf("%f", &pib);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &turismo);

    // Cadastro da Carta 2 //

    printf("Carta2\n");

    printf("Insira o estado:\n");
    scanf("%c%*c", &estado);

    printf("Insira o codigo:\n");
    scanf("%s", codigo);

    printf("Insira a cidade:\n");
    scanf("%s", cidade);

    printf("Insira a populacao:\n");
    scanf("%d", &populacao);

    printf("Insira a area:\n");
    scanf("%f", &area);

    printf("Insira o PIB:\n");
    scanf("%f", &pib);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &turismo);

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
