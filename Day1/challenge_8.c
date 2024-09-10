#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    float fois,moyenne ;
    printf("un programme qui Calcul de la moyenne geometrique de trois nombres.\n");
    printf("entrer a: ");
    scanf("%f",&a);
    printf("entrer b: ");
    scanf("%f",&b);
    printf("entrer c: ");
    scanf("%f",&c);

    // calcule et affiche la moyenne géométrique par (a * b * c)^(1/3)
    fois = a*b*c;
    moyenne = pow( fois , 0.33);
    printf("la moyenne geometrique= %.2f",moyenne);

    return 0;
}