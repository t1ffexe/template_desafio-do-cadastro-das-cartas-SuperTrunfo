#include <stdio.h>

int main () {


    int carta, populacao, pTuristicos, carta2, populacao2, pTuristicos2;  
    char letradoEstado, nomedaCidade [50], codigodaCidade[6], letradoEstado2, nomedaCidade2 [50], codigodaCidade2[6]; 
    float areakm, pib, areakm2, pib2;

    

    //Primeira carta
    printf("INSIRA OS DADOS DA PRIMEIRA CARTA A SEGUIR \n \n \n");
    printf("Digite o número da sua carta: ");
    scanf("%d", &carta);    
    printf("\n");

    printf("Digite a letra do seu estado (A a H): ");
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
    printf("INSIRA OS DADOS DA SEGUNDA CARTA A SEGUIR \n \n \n");
    printf("Digite o número da sua carta: ");
    scanf("%d", &carta2);    
    printf("\n");

    printf("Digite a letra do seu estado (A a H): ");
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

     
      float densidade = populacao / areakm;
      float PIBperCapita = pib / populacao;
      float densidade2 = populacao2 / areakm2;
      float PIBperCapita2 = pib2 / populacao2;
    


    //impressões:

    //Impressão da primeira carta
     printf("DADOS DA PRIMEIRA CARTA: \n");
        printf("\n");
    printf("Número da Carta: %d\n", carta);
         printf("\n");
    printf("Letra do Estado: %c\n", letradoEstado);
         printf("\n");
    printf("Código da Cidade: %s\n", codigodaCidade);
         printf("\n");
    printf("Nome da Cidade: %s\n", nomedaCidade);
         printf("\n");
    printf("População: %i\n", populacao);
         printf("\n");
    printf("Área da Cidade: %.2f km²\n", areakm);
         printf("\n");    
    printf("PIB: %.2f\n", pib);
         printf("\n");
    printf("Pontos Turísticos: %d\n", pTuristicos);
         printf("\n");  
    printf("Densidade Populacional: %.2f\n", densidade);
         printf("\n");  
    printf("PIBperCapita: %.2f\n", PIBperCapita);
         
         

         printf("\n"); 
         printf("\n");


    //Impressão da segunda carta
     printf("DADOS DA SEGUNDA CARTA: \n");
         printf("\n");
    printf("Número da Carta: %d\n", carta2);
         printf("\n");
    printf("Letra do Estado: %c\n", letradoEstado2);
         printf("\n");
    printf("Código da Cidade: %s\n", codigodaCidade2);
         printf("\n");
    printf("Nome da Cidade: %s\n", nomedaCidade2);
         printf("\n");
    printf("População: %i\n", populacao2);
         printf("\n");
    printf("Área da Cidade: %.2f km²\n", areakm2);
         printf("\n");
    printf("PIB: %.2f\n", pib2);
         printf("\n");
    printf("Pontos Turísticos: %d\n", pTuristicos2);
         printf("\n");       
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); 
         printf("\n");      
    printf("PIBperCapita: %.2f reais\n", PIBperCapita2);






    return 0;


}