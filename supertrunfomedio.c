// PASSO 0: Inclusão de Bibliotecas
// Inclui a biblioteca padrão de entrada/saída (necessária para printf e scanf)
#include <stdio.h> 

int main() {
    
    // PASSO 1: Declaração de Variáveis
    // Todas as variáveis para a Carta 1
    char  estado1[100];         
    char  codigo1[5];           
    char  nomeCidade1[100];     
    unsigned long int populacao1; // (Nível Avançado: tipo 'unsigned long int')
    float area1;
    float pib1;
    int   pontosTuristicos1;
    float densidade1;           // (Nível Intermediário: para cálculo)
    float pibPerCapita1;        // (Nível Intermediário: para cálculo)
    float superPoder1;          // (Nível Avançado: para cálculo)

    // Todas as variáveis para a Carta 2
    char  estado2[100];         
    char  codigo2[5];
    char  nomeCidade2[100];
    unsigned long int populacao2; // (Nível Avançado: tipo 'unsigned long int')
    float area2;
    float pib2;
    int   pontosTuristicos2;
    float densidade2;           // (Nível Intermediário: para cálculo)
    float pibPerCapita2;        // (Nível Intermediário: para cálculo)
    float superPoder2;          // (Nível Avançado: para cálculo)


    // PASSO 2: Bloco de Entrada - Carta 1 (Nível Básico)
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o nome do Estado: "); 
    scanf(" %[^\n]", estado1); // " %[^\n]" lê strings com espaços

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1); // "%s" lê strings sem espaços

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("Digite a População: ");
    scanf("%lu", &populacao1); // "%lu" é usado para 'unsigned long int'

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1); // "%f" é usado para 'float'

    printf("Digite o PIB (em R$): "); 
    scanf("%f", &pib1);

    printf("Digite o N° de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // "%d" é usado para 'int'


    // PASSO 3: Bloco de Entrada - Carta 2 (Nível Básico)
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]", estado2); 

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2); 

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em R$): "); 
    scanf("%f", &pib2);

    printf("Digite o N° de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // PASSO 4: Bloco de Cálculos (Nível Intermediário e Avançado)
    
    // Cálculos da Carta 1
    // (float)populacao1 força a divisão a ser de ponto flutuante (conversão de tipo)
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;
    // (Nível Avançado) Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    // (Nível Avançado) Cálculo do Super Poder
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);


    // PASSO 5: Bloco de Saída - Exibição das Cartas (Nível Básico e Intermediário)
    printf("\n\n--- CARTAS CADASTRADAS ---\n");

    // Saída da Carta 1 (incluindo campos calculados do Nível Intermediário)
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1); 
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacao1); // "%lu" para 'unsigned long int'
    printf("Área: %.2f km²\n", area1); // "%.2f" formata para 2 casas decimais
    printf("PIB: R$ %.2f\n", pib1); 
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Saída da Carta 2 (incluindo campos calculados do Nível Intermediário)
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2); 
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    // PASSO 6: Bloco de Comparação (Nível Avançado)
    printf("\n\n--- COMPARAÇÃO DE CARTAS ---\n");

    // Operadores relacionais (>, <) retornam 1 para 'verdadeiro' ou 0 para 'falso'
    int popVenceu = populacao1 > populacao2;
    int areaVenceu = area1 > area2;
    int pibVenceu = pib1 > pib2;
    int pontosVenceu = pontosTuristicos1 > pontosTuristicos2;
    int densidadeVenceu = densidade1 < densidade2; // REGRA ESPECIAL: Menor vence
    int pibPcVenceu = pibPerCapita1 > pibPerCapita2;
    int superVenceu = superPoder1 > superPoder2;

    // Exibição dos resultados (1 = C1 venceu, 0 = C2 venceu/Empate)
    // (popVenceu ? 1 : 2) é um operador ternário: "Se popVenceu for 1, imprima 1, senão imprima 2"
    printf("População: Carta %d venceu (%d)\n", (popVenceu ? 1 : 2), popVenceu);
    printf("Área: Carta %d venceu (%d)\n", (areaVenceu ? 1 : 2), areaVenceu);
    printf("PIB: Carta %d venceu (%d)\n", (pibVenceu ? 1 : 2), pibVenceu);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosVenceu ? 1 : 2), pontosVenceu);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadeVenceu ? 1 : 2), densidadeVenceu);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPcVenceu ? 1 : 2), pibPcVenceu);
    printf("Super Poder: Carta %d venceu (%d)\n", (superVenceu ? 1 : 2), superVenceu);

    return 0; // Indica que o programa terminou com sucesso
}