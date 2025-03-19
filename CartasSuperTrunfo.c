#include <stdio.h>

int main() {
    char estado[50];
    char codigo_carta[50];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Carta 1\n");

    printf("Digite o estado: \n");
    fgets(estado, 50, stdin);

    printf("Digite o codigo da carta: \n");
    fgets(codigo_carta, 50, stdin);

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade, 50, stdin);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    getchar(); // remove o caractere de newline do buffer de entrada

    printf("Area: \n");
    scanf("%f", &area);
    getchar(); // remove o caractere de newline do buffer de entrada

    printf("Pib: \n");
    scanf("%f", &pib);
    getchar(); // remove o caractere de newline do buffer de entrada

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    getchar(); // remove o caractere de newline do buffer de entrada

    printf("Nome do estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f km²\n", area);
    printf("Pib: %f bilões de reais \n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    printf("Carta 2 \n");

    printf("Digite o estado: \n");
    fgets(estado, 50, stdin);

    printf("Digite o codigo da carta: \n");
    fgets(codigo_carta, 50, stdin);

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade, 50, stdin);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    getchar(); // remove o caractere de newline do buffer de entrada

    printf("Area: \n");
    scanf("%f", &area);
    getchar(); // remove o caractere de newline do buffer de entrada

    printf("Pib: \n");
    scanf("%f", &pib);
    getchar(); // remove o caractere de newline do buffer de entrada

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    getchar(); // remove o caractere de newline do buffer de entrada

    printf("Nome do estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f km² \n", area);
    printf("Pib: %f bilhões de reais \n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);







    return 0;
}
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
  // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores 