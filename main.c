#include
int main(){
//denominação das variaveis da carta1
char estado1;
char codigo1[4];
char nomecidade1[50];
int população1;
float area1;
float pib1;
int pontosturisticos1;

//denominação das variaveis da carta2
char estado2;
char codigo2[4];
char nomecidade2[35];
int população2;
float area2;
float pib2;
int pontosturisticos2;

//entrada dos dados da carta1
printf("=== Cadastro da Carta1 === ");
printf("Digite o estado (A-H): ");
scanf("%c", &estado1);

printf("Digite o codigo da carta (exp A2): ");
scanf("%s", &codigo1);

printf("Digite o nome da Cidade: ");
scanf("%s", &nomecidade1);

printf("Digite a população: ");
scanf("%d", &população1);

printf("Digite a area: ");
scanf("%f", &area1);

printf("Digite o pib: ");
scanf("%f", &pib1);

printf("Digite os pontos Turisticos: ");
scanf("%d", &pontosturisticos1);

// Entrada dos dados da Carta 2
printf("=== Cadastro da Carta 2 === ");
printf("Digite o estado (A-H): ");
scanf("%c", &estado2);

printf("Digite o código da carta (ex: A01): ");
scanf("%s", codigo2);

printf("Digite o nome da cidade: ");
scanf("%s", nomeCidade2);

printf("Digite a população: ");
scanf("%d", &populacao2);

printf("Digite a área em km²: ");
scanf("%f", &area2);

printf("Digite o PIB (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontosTuristicos2);

// Exibição dos dados da Carta 1
printf("=== Carta 1 === ");
printf("Estado: %c: ", estado1);
printf("Código: %s: ", codigo1);
printf("Nome da Cidade: %s: ", nomeCidade1);
printf("População: %d: ", populacao1);
printf("Área: %.2f km²: ", area1);
printf("PIB: %.2f bilhões de reais: ", pib1);
printf("Número de Pontos Turísticos: %d: ", pontosTuristicos1);

// Exibição dos dados da Carta 2
printf("=== Carta 2 === ");
printf("Estado: %c: ", estado2);
printf("Código: %s: ", codigo2);
printf("Nome da Cidade: %s: ", nomeCidade2);
printf("População: %d: ", populacao2);
printf("Área: %.2f km²: ", area2);
printf("PIB: %.2f bilhões de reais: ", pib2);
printf("Número de Pontos Turísticos: %d: ", pontosTuristicos2);

return 0;
}
