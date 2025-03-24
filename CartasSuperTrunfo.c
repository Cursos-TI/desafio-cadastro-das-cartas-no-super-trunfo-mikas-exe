#include <stdio.h>

int main() {
    int carta;
    char estado[50];
    char codigo_carta[50];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
   float pib_per_capita;


    printf("carta:\n");
    scanf("%d", &carta);
    getchar(); 

    printf("Digite o estado: \n");
    fgets(estado, 50, stdin);

    printf("Digite o codigo da carta: \n");
    fgets(codigo_carta, 50, stdin);

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade, 50, stdin);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    
    printf("Area: \n");
    scanf("%f", &area);
    
    printf("Pib: \n");
    scanf("%f", &pib);
    
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    pib_per_capita = pib / populacao;
    densidade_populacional = populacao / area;




    printf("carta: %d\n", carta);
    printf("Nome do estado: %s", estado);
    printf("Codigo da carta: %s", codigo_carta);
    printf("Nome da cidade: %s", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("Pib: %.2f bilhoes de reais\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    printf("pib per capita: %2f reais\n",pib_per_capita);
    printf("densidade populacional: %2f hab/km² \n", densidade_populacional);



    printf("carta:\n");
    scanf("%d", &carta);
    getchar(); 

    printf("Digite o estado: \n");
    fgets(estado, 50, stdin);

    printf("Digite o codigo da carta: \n");
    fgets(codigo_carta, 50, stdin);

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade, 50, stdin);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    
    printf("Area: \n");
    scanf("%f", &area);
    
    printf("Pib: \n");
    scanf("%f", &pib);
    
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    pib_per_capita = pib / populacao;
    densidade_populacional = populacao / area;




    printf("carta: %d\n", carta);
    printf("Nome do estado: %s", estado);
    printf("Codigo da carta: %s", codigo_carta);
    printf("Nome da cidade: %s", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("Pib: %.2f bilhoes de reais\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    printf("pib per capita: %2f reais\n",pib_per_capita);
    printf("densidade populacional: %2f hab/km² \n", densidade_populacional);

    return 0;
}

