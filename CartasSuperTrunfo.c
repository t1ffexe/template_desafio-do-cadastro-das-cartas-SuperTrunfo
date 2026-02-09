#include <stdio.h>

int main () {

    //variáveis
    int carta, populacao, pTuristicos, carta2, populacao2, pTuristicos2;  
    char letradoEstado, nomedaCidade [50], codigodaCidade[6], letradoEstado2, nomedaCidade2 [50], codigodaCidade2[6]; 
    float areakm, pib, areakm2, pib2;

    //Primeira carta
    printf("Insira os dados da primeira carta a seguir \n");
    printf("Digite o número da sua carta: ");
    scanf("%d", &carta);    
    printf("\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &letradoEstado);       
    printf("\n");      

    printf("Digite o código da sua cidade: ");  
    scanf("%s", &codigodaCidade);
    printf("\n");

    printf("Digite o nome da sua cidade: ");
    scanf("%s", &nomedaCidade);
    printf("\n");

    printf("Digite o número da população de sua cidade: "); 
    scanf("%i", &populacao);
    printf("\n");

    printf("Digite a área da sua cidade: ");
    scanf("%f", &areakm);
    printf("\n");

    printf("Digite o PIB de sua cidade: ");
    scanf("%f", &pib);
    printf("\n");

    printf("Digite quantos pontos turísticos tem na sua cidade: ");
    scanf("%d", &pTuristicos);
    printf("\n");
    

    //Segunda carta
    printf("Insira os dados da segunda carta a seguir \n");
    printf("Digite o número da sua carta: ");
    scanf("%d", &carta2);    
    printf("\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &letradoEstado2);       
    printf("\n");      

    printf("Digite o código da sua cidade: ");  
    scanf("%s", &codigodaCidade2);
    printf("\n");

    printf("Digite o nome da sua cidade: ");
    scanf("%s", &nomedaCidade2);
    printf("\n");

    printf("Digite o número da população de sua cidade: "); 
    scanf("%i", &populacao2);
    printf("\n");

    printf("Digite a área da sua cidade: ");
    scanf("%f", &areakm2);
    printf("\n");

    printf("Digite o PIB de sua cidade: ");
    scanf("%f", &pib2);
    printf("\n");

    printf("Digite quantos pontos turísticos tem na sua cidade: ");
    scanf("%d", &pTuristicos2);
    printf("\n");

    //impressões:

    //Impressão da primeira carta
     printf("DADOS DA PRIMEIRA CARTA: \n");
    printf("Número da carta: %d\n", carta);
    printf("Letra do estado: %c\n", letradoEstado);
    printf("Código da cidade: %s\n", codigodaCidade);
    printf("Nome da Cidade: %s\n", nomedaCidade);
    printf("População: %i\n", populacao);
    printf("Área da cidade: %f\n", areakm);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos: %d\n", pTuristicos);


    //Impressão da segunda carta
     printf("DADOS DA SEGUNDA CARTA: \n");
    printf("Número da carta: %d\n", carta2);
    printf("Letra do estado: %c\n", letradoEstado2);
    printf("Código da cidade: %s\n", codigodaCidade2);
    printf("Nome da Cidade: %s\n", nomedaCidade2);
    printf("População: %i\n", populacao2);
    printf("Área da cidade: %f\n", areakm2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pTuristicos2);

    return 0;
}