#include <stdio.h>

int main (){
    int carta = 1;
    char estado[20] = "H";
    char codigo[20] = "H01";
    char cidade[20] = "Salvador";
    int populacao = 241800;
    float area = 693.8;
    float pib = 63;
    int pturisticos = 89;

    printf("Paises\n");

    printf("Carta:%d\n",carta);
    printf("Estado:%s\n",estado);
    printf("Codigo:%s\n",codigo);
    printf("Cidade:%s\n",cidade);
    printf("População:%d milhões de habitantes\n",populacao);
    printf("Área:%fKm²\n",area);
    printf("PIB:%f bilhões de reais\n",pib);
    printf("Pontos de turisticos:%d\n",pturisticos);

    int carta2 = 2 ;
    char estado2[20] = "B";
    char codigo2[20] = "B02";
    char cidade2[20] = "Curitiba";
    int populacao2 = 17740;
    float area2 = 432;
    float pib2 = 98;
    int pturisticos2 = 35;
    
    printf("\n");
    printf("Carta:%d\n",carta2);
    printf("Estado:%s\n",estado2);
    printf("Codigo:%s\n",codigo2);
    printf("Cidade:%s\n",cidade2);
    printf("População:%d milhões de habitantes\n",populacao2);
    printf("Área:%fKm²\n",area2);
    printf("PIB:%f bilhões de reais\n",pib2);
    printf("Pontos de turisticos:%d\n",pturisticos2);

    
    return 0;
}