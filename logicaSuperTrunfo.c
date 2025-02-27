#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado[10], estado2[10];
    char codigoCarta[4], codigoCarta2[4];
    char nomeCidade[50], nomeCidade2[50];
    unsigned long int populacao, populacao2;
    int pontosTuristicos, pontosTuristicos2;
    float area, pib, area2, pib2;
    float densidade, pibpercapta, densidade2, pibpercapta2;
    float superpoder, superpoder2;

    
    // Cadastro das Cartas:
    // Lógica para solicitar ao usuário que insira os dados da CARTA 1
    // utilizando a função scanf para capturar as entradas.
    printf("====================***====================\n");
    printf("Insira os dados da Carta 1:\n");
    printf("Insira o Estado (A-H): ");
    scanf("%s", &estado);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &codigoCarta);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade);
    printf("Populacao: ");
    scanf("%ld", &populacao);
    printf("Area (em km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);
    printf("========== DADOS INSERIDOS COM SUCESSO ===========\n");
    printf("\n");

    // Lógica para solicitar ao usuário que insira os dados da CARTA 2
    // utilizando a função scanf para capturar as entradas.
    printf("====================***====================\n");
    printf("Insira os dados da Carta 2:\n");
    printf("Insira o Estado (A-H): ");
    scanf("%s", &estado2);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &codigoCarta2);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade2);
    printf("Populacao: ");
    scanf("%ld", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("========== DADOS INSERIDOS COM SUCESSO ===========\n");
    printf("\n");

    //APÓS O USUÁRIO ATRIBUIR VALORES AS VARIÁVEIS, ESSES VALORES
    //ESTÃO SENDO UTILIZADOS PARA REALIZAR O CALCULO DE DENSIDADE POPULACIONAL
    // E DE PIB PER CAPTA.
    densidade = populacao / area;
    densidade2 = populacao2 / area2;
    pibpercapta = pib / populacao;
    pibpercapta2 = pib2 / populacao2;

    //CALCULO E ALTERAÇÃO NO TIPO DE DADOS PARA CHEGAR AO VALOR DO SUPER PODER
    superpoder = (float)(area + pib + populacao + pibpercapta + pontosTuristicos - densidade); // Calculo do superpoder da carta 1 
    superpoder2 = (float)(area2 + pib2 + populacao2 + pibpercapta2 + pontosTuristicos2 - densidade2); // Calculo do superpoder da carta 2 

    //UTILIZANDO O COMANDO PRINTF PARA APRESENTAR OS DADOS DA CARTA 1, INSERIDOS PELO USUÁRIO
    //NESSA PARTE ESTOU COLOCANDO O TEXTO DE APRESENTAÇÃO SEGUIDOS DOS VALORES ARMAZENADOS
    //NAS VARIAVEIS QUE SAO INDICADAS NO CÓDIGO.
    printf("\n");
    printf("====================***====================\n");
    printf("INFORMAÇÕES DA CARTA 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta 01: %s\n",codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Area (em km²): %.2f\n",area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos);
    //UTILIZANDO O COMANDO PRINTF PARA MOSTRAR OS VALORES OBTIDOS APÓS OS
    //CALCULOS DAS NOVAS VARIÁVEIS DE DENSIDADE DE PIB PER CAPTA.
    printf("Densidade Populacional (hab/km²): %.2f\n", densidade);
    printf("PIB per Capta (R$): %.2f\n", pibpercapta);
    printf("Super Poder: %.2f\n", superpoder);

    //APRESENTAÇÃO DAS INFORMAÇÕES DA CARTA 2
    printf("\n");
    printf("====================***====================\n");
    printf("INFORMAÇÕES DA CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta 01: %s\n",codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Area (em km²): %.2f\n",area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos2);
    //UTILIZANDO O COMANDO PRINTF PARA MOSTRAR OS VALORES OBTIDOS APÓS OS
    //CALCULOS DAS NOVAS VARIÁVEIS DE DENSIDADE DE PIB PER CAPTA.
    printf("Densidade Populacional (hab/km²): %.2f\n", densidade2);
    printf("PIB per Capta (R$): %.2f\n", pibpercapta2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n");
    printf("====================***====================\n");
    printf("\n");
    printf("AGORA IREMOS COMPARAR ATRIBUTOS DAS DUAS CARTAS\n");
    printf("\n");

    //COMPARAÇÃO DO ATRIBUTO POPULAÇÃO
    printf("====== COMPARAÇÃO DO ATRIBUTO POPULAÇÃO ======\n");
    printf("Carta 1 = %s : %d\n", nomeCidade, populacao);
    printf("Carta 2 = %s : %d\n", nomeCidade2, populacao2);
        
    if(populacao > populacao2){
        printf("A população da Carta 01 é maior que a população Carta 2\n", populacao, populacao2);    
        printf("A Carta 1 (cidade: %s) é a vencedora!", nomeCidade);
        printf("\n");
    }  else{
        printf("A população da Carta 1 não é maior que a população da Carta 2\n", populacao, populacao2);
        printf("A Carta 2 (cidade: %s) é a vencedora!\n", nomeCidade2);
    }
    
    //COMPARAÇÃO DO ATRIBUTO PONTOS TURISTICOS
    printf("\n");
    printf("====== COMPARAÇÃO DO ATRIBUTO PONTOS TURISTICOS ======\n");
    printf("Carta 1 = %s : %d\n", nomeCidade, pontosTuristicos);
    printf("Carta 2 = %s : %d\n", nomeCidade2, pontosTuristicos2);
        
    if(pontosTuristicos > pontosTuristicos2){
        printf("O número de pontos turisticos da Carta 01 é maior que da Carta 2\n", pontosTuristicos, pontosTuristicos2);    
        printf("A Carta 1 (cidade: %s) é a vencedora!", nomeCidade);
        printf("\n");
    }  else{
        printf("O número de pontos turisticos da Carta 1 não é maior que da Carta 2\n", pontosTuristicos, pontosTuristicos2);
        printf("A Carta 2 (cidade: %s) é a vencedora!\n", nomeCidade2);
    }
    
    
    printf("\n");
    printf("========= FIM DO PROGRAMA =========");
    printf("\n");
    return 0;
}
