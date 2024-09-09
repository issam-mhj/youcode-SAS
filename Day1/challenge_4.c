#include <stdio.h>

int main() {
    float n=  0.27778;
    float km;
    printf(" Conversion de la vitesse: ");
    printf("entrer la vitesse en kilometres par heure (km/h): ");
    scanf("%f",&km);
    printf("m/s= %.2f", km*n);
    return 0;
}