#include <stdio.h>

//Nível novato
int main() {
    int carta1; 
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;
    char estado1 [20], estado2 [20];
    char codigo1 [4] = "A01", codigo2 [4] = "A02"; //3 posições úteis + uma posição para o terminador "\0"
    char cidade1 [20], cidade2 [20];

    //Nível aventureiro
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

    // sintaxe scanf
    // scanf("formato1""formato2, %variavel1, varialvel2, ...");

    //Inserir dados da primeira carta
    printf("*** Carta 1 *** \n");
    printf("Escolha o estado de 'A' a 'H': ");
    scanf("%s", estado1);

    printf("Digite a primeira letra do estado seguida do número 01: ");
    scanf("%s", codigo1); 
    
    printf("Escolha a cidade: ");
    scanf("%s", cidade1);

    printf("Quantidade da população: ");
    scanf("%d", &populacao1);

    printf("Qual a área: ");
    scanf("%f", &area1);

    printf("Qual o PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    //Dados da primeira carta impresso
    printf("*** carta 1 ***\nEstado: %s\n", estado1);
    printf("Código: %s\nCidade: %s\n", codigo1, cidade1);
    printf("População: %d\nÁrea: %f\n", populacao1, area1);
    printf("PIB: %f\nPontos Turísticos: %d\n", pib1, pontosturisticos1);

    //Nível aventureiro
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

     //Inserir dados da segunda carta
    printf("*** Carta 2 *** \n");
    printf("Escolha o estado de 'A' a 'H': ");
    scanf("%s", estado2);

    printf("Digite a primeira letra do estado seguida do número 02: ");
    scanf("%s", codigo2); 
    
    printf("Escolha a cidade: ");
    scanf("%s", cidade2);

    printf("Quantidade da população: ");
    scanf("%d", &populacao2);

    printf("Qual a área: ");
    scanf("%f", &area2);

    printf("Qual o PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    //Dados da segunda carta impresso
    printf("*** carta 2 ***\nEstado: %s\n", estado2);
    printf("Código: %s\nCidade: %s\n", codigo2, cidade2);
    printf("População: %d\nÁrea: %f\n", populacao2, area2);
    printf("PIB: %f\nPontos Turísticos: %d\n", pib2, pontosturisticos2);

    //Nível aventureiro
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);

    

    return 0;
}
