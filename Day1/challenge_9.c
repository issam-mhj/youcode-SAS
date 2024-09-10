#include <stdio.h>
#include <math.h>

int main() {
    float x1,x2,y1,y2,z1,z2;
    float distance,power;
    printf("programme qui Calcul de la distance entre deux points dans un espace 3D \n");
    // take numbers 
    printf("entrer x1: ");
    scanf("%f",&x1);
    printf("entrer x2: ");
    scanf("%f",&x2);
    printf("entrer y1: ");
    scanf("%f",&y1);
    printf("entrer y2: ");
    scanf("%f",&y2);
    printf("entrer z1: ");
    scanf("%f",&z1);
    printf("entrer z2: ");
    scanf("%f",&z2);
    // culcule la distance
    power= pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2); 
    distance = sqrt(power);
    
    // affiche la resultat 
    printf(" la distance= %.2f",distance);

    return 0;
    }