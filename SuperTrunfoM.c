#include <stdio.h>

int main () {


    int carta1, pTuristicos, carta2, pTuristicos2;  
    char letradoEstado, nomedaCidade [50], codigodaCidade[6], letradoEstado2, nomedaCidade2 [50], codigodaCidade2[6]; 
    float areakm, pib, areakm2, pib2;
    unsigned long int populacao, populacao2;
    
    

    

    //Primeira carta
    printf("INSIRA OS DADOS DA PRIMEIRA CARTA A SEGUIR \n \n \n");
    printf("Digite o número da sua carta: ");
    scanf("%d", &carta1);    
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
    scanf("%u", &populacao);
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
    scanf("%u", &populacao2);
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
    

          printf("\n\n\n"); 


    //impressões:

    //Impressão da primeira carta
     printf("DADOS DA PRIMEIRA CARTA: \n\n");
        printf("\n");
    printf("Número da Carta: %d\n", carta1);
         printf("\n");
    printf("Letra do Estado: %c\n", letradoEstado);
         printf("\n");
    printf("Código da Cidade: %s\n", codigodaCidade);
         printf("\n");
    printf("Nome da Cidade: %s\n", nomedaCidade);
         printf("\n");
    printf("População: %u\n", populacao);
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
     
    
           printf("\n\n\n"); 


    //Impressão da segunda carta
     printf("DADOS DA SEGUNDA CARTA: \n\n");
         printf("\n");
    printf("Número da Carta: %d\n", carta2);
         printf("\n");
    printf("Letra do Estado: %c\n", letradoEstado2);
         printf("\n");
    printf("Código da Cidade: %s\n", codigodaCidade2);
         printf("\n");
    printf("Nome da Cidade: %s\n", nomedaCidade2);
         printf("\n");
    printf("População: %u\n", populacao2);
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




     float densidadeInversa = 1 / densidade;
     float densidadeInversa2 = 1 / densidade2; 

     //cálculo das variáveis

     float SuperPoderC1 = (double) populacao + areakm + pib + pTuristicos + PIBperCapita + densidadeInversa;
     float SuperPoderC2 = (double) populacao2 + areakm2 + pib2 + pTuristicos2 + PIBperCapita2 + densidadeInversa2;


          printf("\n\n\n"); 


     //Comparação das cartas


          printf("Comparação das Cartas: \n \n \n");
         

          if (populacao > populacao2)
          {
               printf("População: A Carta 1 venceu (%d)\n", populacao > populacao2);   
          }

          else {
               printf("População: A Carta 2 venceu (%d)\n", populacao > populacao2);
          }
          

           if (areakm > areakm2)
          {
               printf("Áreakm²: A Carta 1 venceu (%d)\n", areakm > areakm2);   
          }

          else {
               printf("Áreakm²: A Carta 2 venceu (%d)\n", areakm > areakm2);
          }

          
           if (pib > pib2)
          {
               printf("PIB: A Carta 1 venceu (%d)\n", pib > pib2);   
          }

          else {
               printf("PIB: A Carta 2 venceu (%d)\n", pib > pib2);
          }


           if (pTuristicos > pTuristicos2)
          {
               printf("Pontos Turísticos: A Carta 1 venceu (%d)\n", pTuristicos > pTuristicos2);   
          }

          else {
               printf("Pontos Turísticos: A Carta 2 venceu (%d)\n", pTuristicos > pTuristicos2);
          }


           if (densidade < densidade2)
          {
               printf("Densidade: A Carta 1 venceu (%d)\n", densidade < densidade2);   
          }

          else {
               printf("Densidade: A Carta 2 venceu (%d)\n", densidade < densidade2);
          }

           if (PIBperCapita > PIBperCapita2)
          {
               printf("PIB per Capita: A Carta 1 venceu (%d)\n", PIBperCapita > PIBperCapita2);   
          }

          else {
               printf("PIB per Capita: A Carta 2 venceu (%d)\n",PIBperCapita > PIBperCapita2);
          }

          if (SuperPoderC1 > SuperPoderC2){

          printf("SuperPoder: A Carta 1 venceu (%d)\n", SuperPoderC1 > SuperPoderC2);
          }

          else{

          printf("SuperPoder: A Carta 2 venceu (%d)\n", SuperPoderC1 > SuperPoderC2); 
          }
               


       




     
    return 0;
    
  

}