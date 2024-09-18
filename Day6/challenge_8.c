#include <stdio.h>



struct cercle{
    float rayon;
};


float culcAir(float a){
    return 3.14 * (a*a);
}

int main() {
    struct cercle air;
    printf("entrez la valeur de rayon: ");
    scanf("%f",&air.rayon);
    printf("l'aire= %.2f",culcAir(air.rayon));

    return 0;
}