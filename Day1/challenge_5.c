#include <stdio.h> 

int main(){
    float C ;
    printf("un programme qui demande la temperature en Celsius et affiche l'etat de l'eau a cette temperature (solide, liquide, gaz):\n");
    printf("entrer la temperature en Celsius : ");
    scanf("%f",&C);

    if (C<0)
        printf("Solid");
    else if (0<=C && C <100)
        printf("Liquide");
    else
        printf("Gaz");

    return 0;
}