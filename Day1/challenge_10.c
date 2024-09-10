#include <stdio.h>
#include <math.h>

int main() {
    float rayon ;
    float p = 3.14;
    float volume,power ;

    printf("programme qui  trouver le volume d'une sphere\n");
    printf("entrer le rayon de la sphere: ");
    scanf("%f",&rayon);

    //calcule volume et affiche resultat
    power= pow (rayon,3);
    volume = 1.3333 * p * power;
    printf("le volume= %.2f",volume);


    return 0 ;
}