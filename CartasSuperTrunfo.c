#include <stdio.h>

int main(){

// Apresentação do projeto.

printf("Desafio Nivel Novato de Super Trunfo em C da Estacio\nCodigo criado por Gabriel de Jesus\nSeja Bem vindo.\n");

//Declaração de variaveis.
// carta 01

char estado_carta1;
char codigo_carta1[5];
char nome_carta1[50];
int populacao_carta1;
float area_carta1;
float pib_carta1;
int turismo_carta1;

// carta 02

char estado_carta2;
char codigo_carta2[5];
char nome_carta2[50];
int populacao_carta2;
float area_carta2;
float pib_carta2;
int turismo_carta2;

// Aqui vamos coletar os dados da cidade 01.

printf("Qual o estado da carta 1? Ex(A-H): ");
scanf(" %c", &estado_carta1);

printf("Qual o Código da carta 1? Ex(A01): ");
scanf("%s", codigo_carta1);

printf("Qual o nome da cidade da carta 01? ");
scanf("%s", nome_carta1);

printf("Qual a população da carta 01? (apenas numeros): ");
scanf("%d", &populacao_carta1);

printf("qual a Area em KM² da carta 01? (apenas numeros): ");
scanf("%f", &area_carta1);

printf("Qual o PIB em bilhões da carta 01? (apenas numeros): ");
scanf("%f", &pib_carta1);

printf("Qual a quantidade de pontos turisticos da carta 01? ");
scanf("%d", &turismo_carta1);


// Aqui vamos coletar os dados da cidade 02.

printf("Qual o estado da carta 2? (A-H): ");
scanf(" %c", &estado_carta2);

printf("Qual o Código da carta 2? Ex(A02): ");
scanf("%s", codigo_carta2);

printf("Qual o nome da cidade da carta 02? ");
scanf("%s", nome_carta2);

printf("Qual a população da carta 02? (apenas numeros): ");
scanf("%d", &populacao_carta2);

printf("qual a Area em KM² da carta 02? (apenas numeros) ");
scanf("%f", &area_carta2);

printf("Qual o PIB em bilhões da carta 02? (apenas numeros): ");
scanf("%f", &pib_carta2);

printf("Qual a quantidade de pontos turisticos da carta 02? ");
scanf("%d", &turismo_carta2);

// apresentando a carta 01

printf("\nCarta 01\n");
printf("Estado: %c\n", estado_carta1);
printf("Codigo da carta: %s\n", codigo_carta1);
printf("Nome da cidade: %s\n", nome_carta1);
printf("População: %d\n", populacao_carta1);
printf("Area: %.2f KM²\n", area_carta1);
printf("PIB: %.2f Bilhões de reais\n", pib_carta1);
printf("Numero de Pontos Turisticos: %d\n", turismo_carta1);

// apresentando a carta 02

printf("\nCarta 02\n");
printf("Estado: %c\n", estado_carta2);
printf("Codigo da carta: %s\n", codigo_carta2);
printf("Nome da cidade: %s\n", nome_carta2);
printf("População: %d\n", populacao_carta2);
printf("Area: %.2f KM²\n", area_carta2);
printf("PIB: %.2f Bilhoes de reais\n", pib_carta2);
printf("Numero de Pontos Turisticos: %d\n", turismo_carta2);









    return 0;    //Progrma finalizou com sucesso

}