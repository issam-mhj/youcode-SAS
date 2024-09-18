#include <stdio.h>

struct air{
    float longueur;
    float largeur;
};

float airCulc(float a,float b ){
    return a*b;
}

int main(){
    struct air data;
    printf("entrez longueur: ");
    scanf("%f",&data.longueur);
    printf("entrez largeur: ");
    scanf("%f",&data.largeur);
    printf("l'air= %.2f",airCulc(data.largeur,data.longueur));
    return 0;
}