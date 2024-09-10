#include <stdio.h>

int main() {
    float longueur, largeur,surface;
    printf("programme qui trouver la surface d'un rectangle\n");
    printf("entrer la longueur: ");
    scanf("%f",&longueur);
    printf("entrer la largeur: ");
    scanf("%f",&largeur);

    //calcule et affiche 
    surface = longueur * largeur ;

    printf("la surface= %.2f",surface);


    return 0; 
}