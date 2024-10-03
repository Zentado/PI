#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main(){
setlocale (LC_ALL,"Portuguese");
float wire, mapa, persona, cor, fonte, think;

printf("Dê uma nota de 1 a 10 de importância para Mapas de Empatia:\n");
scanf("%f", &mapa);

printf("Dê uma nota de 1 a 10 de importância para WireFrame:\n");
scanf("%f", &wire);

printf("Dê uma nota de 1 a 10 de importância para Personas:\n");
scanf("%f", &persona);

printf("Dê uma nota de 1 a 10 de importância para Cor do Projeto:\n");
scanf("%f", &cor);

printf("Dê uma nota de 1 a 10 de importância para Design Think:\n");
scanf("%f", &think);

printf("Dê uma nota de 1 a 10 de importância para Fonte do Projeto:\n");
scanf("%f", &fonte);

printf("As notas de importância foram:\n\t Mapas de Empatia:%.2f \n\t WireFrame:%.2f \n\t Personas:%.2f \n\t Cor do Projeto:%.2f \n\t Design Think:%.2f \n\t Fonte do Projeto:%.2f ", mapa , wire, persona, cor, think, fonte);
if (mapa>wire && mapa>persona && mapa>cor && mapa>think && mapa>fonte){
    printf("\nO projeto escolhido foi Mapas de Empatia\n");
}
else if (wire>mapa && wire>persona && wire>cor && wire>think && wire>fonte){
    printf("\nO projeto escolhido foi WireFrame\n");
}
else if (persona>mapa && wire<persona && persona>cor && persona>think && persona>fonte){
    printf("\nO projeto escolhido foi Personas\n");
}
else if (think>mapa && think<persona && think>cor && persona<think && think>fonte){
    printf("\nO projeto escolhido foi Design Think\n");
}
else if (fonte>mapa && fonte<persona && fonte>cor && fonte<think && think<fonte){
    printf("\nO projeto escolhido foi Fonte do Projeto\n");
}
    return 0;
}