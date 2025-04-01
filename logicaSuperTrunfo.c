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

    printf("Insira o estadoA:\n");
    scanf("%c", &estadoA);

    printf("Insira o codigoA:\n");
    scanf("%s", codigoA);

    printf("Insira a cidadeA:\n");
    scanf("%s", cidadeA);

    printf("Insira a populacaoA:\n");
    scanf("%d", &populacaoA);

    printf("Insira a areaA:\n");
    scanf("%f", &areaA);

    printf("Insira o PIBA:\n");
    scanf("%f", &pibA);

    printf("Insira o numero de pontos turisticosA:\n");
    scanf("%d", &turismoA);

    // Cadastro da Carta 2 //

    printf("Carta2\n");

    printf("Insira o estadoB:\n");
    scanf("%c%*c", &estadoB);

    printf("Insira o codigoB:\n");
    scanf("%s", codigoB);

    printf("Insira a cidadeB:\n");
    scanf("%s", cidadeB);

    printf("Insira a populacaoB:\n");
    scanf("%d", &populacaoB);

    printf("Insira a areaB:\n");
    scanf("%f", &areaB);

    printf("Insira o PIBB:\n");
    scanf("%f", &pibB);

    printf("Insira o numero de pontos turisticoB:\n");
    scanf("%d", &turismoB);

    if (populacaoA > populacaoB) {
    printf("Cidade 1 tem maior população.\n");
    } else {
    printf("Cidade 2 tem maior população.\n");
    }

    return 0;
}
