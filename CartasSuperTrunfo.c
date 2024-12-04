#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
//estrutura da carta - 8 estados 4 cidades = 32 cartas

typedef struct {
    char estado; //estado de A-H 
    char cidade [25]; // nome da cidade no max 20 caracteres
    char codigo [3]; //código da carta com o primeiro caractere do estado e a numeração de 01 a 04  (ex:A01 B02...)
    int populacao; // população da cidade
    float area; //área da cidade em km²
    float pib;  //pib da cidade 
    int pontos_turisticos; //número de pontos turisticos da cidade
} carta;
//função para cadastrar a carta
void cadatrarcarta(carta* c) { // tornando a letra c na referência das váriaveis da carta

    printf("\nDigite a letra do estado (A-H): "); //cadastrando a letra do estado limitando a 1 caractere
    scanf(" %c", &c->estado);
    
    printf("Digite o nome da cidade: "); //cadastrando nome da cidade permitindo utilizar o espaço ex: Porto Alegre limitando a 20 caracteres
    scanf(" %[^\n]s", c->cidade);

    printf("Digite o código da carta (letra do estado seguido do numero de 01 a 04 exemplo:A01,B02...):\n"); // cadastrando o código da carta limitando a 3 caracteres 
    scanf("%3s",c->codigo);

    printf("Digite o número da população "); //cadastrando a população da cidade
    scanf("%d",&c->populacao);
    
    printf("Digite o tamanho da área em km²: "); // cadastrando a área em km²
    scanf("%f",&c->area);

    printf("Digite o valor do Pib da cidade: "); //cadastrando o valor do pib
    scanf("%f",&c->pib);

    printf("Digite a quantidade de pontos turisticos "); // cadastrando a quantidade de pontos turisticos
    scanf("%d",&c->pontos_turisticos);

     //exibindo os dados que  foram cadastrados na carta
    printf("\n Carta cadastrada com sucesso!\n");
    printf("Estado: %c\n", c->estado);
    printf("Código da carta: %s\n", c->codigo);
    printf("Nome da cidade: %s\n", c->cidade);
    printf("População: %d habitantes\n", c->populacao);
    printf("Área: %.3f km²\n", c->area);
    printf("PIB: R$ %.2f reais\n", c->pib);
    printf("Pontos turísticos: %d\n", c->pontos_turisticos);
}
// função principal
int main (){
    carta cartas[32]; // considerando que teremos 32 cartas (8 estados x 4 cidades por estado)
int i;

printf("Bem vindo ao jogo Super Trunfo\n"); // inicializando o Jogo

//cadastro de 32 cartas 
for (i = 0; i<32; i++){
  printf ("\n Cadastro da carta %d:\n",i+1);
  cadatrarcarta(&cartas[i]);
}

printf("\n todas as cartas foram cadastradas com sucesso\n");

return 0;

}
