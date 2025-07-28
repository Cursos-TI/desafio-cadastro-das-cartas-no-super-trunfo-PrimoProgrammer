#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    #include <stdio.h>

int main(){ char estado[10]; char codigodacarta[10]; char nomedacidade[15]; int populacao; float areaemkm2; float pib; int numerodepontosturisticos;
printf("Novo commit \n")
printf("Estado: \n");
scanf("%s", &estado);

printf("Código da carta: \n");
scanf("%s", &codigodacarta);

printf("Nome da cidade: \n");
scanf("%s", nomedacidade);

printf("População: \n");
scanf("%d", &populacao);

printf("Área em km²: \n");
scanf("%f", &areaemkm2);

printf("PIB: \n");
scanf("%f", &pib);

printf("Número de pontos turísticos: \n", numerodepontosturisticos);
scanf("%d", &numerodepontosturisticos);

// Exibindo os dados das cartas

printf(">>>>Carta: \n - Estado: %s\n", estado);
printf("-Código da carta: %s\n - Nome da cidade: %s\n", codigodacarta, nomedacidade);
printf("-População: %d\n - Área em km²: %.2f\n", populacao, areaemkm2);
printf("-PIB: %.2f\n - Número de pontos turísticos: %d\n", pib, numerodepontosturisticos);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
