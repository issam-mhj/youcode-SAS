#include <stdio.h> 

int main() {
    float first,second,third;
    printf("Moyenne ponderee de trois nombres\n");
    printf("entrer 1er nombre( ponderation 2) :");
    scanf("%f",&first);
    printf("entrer 2eme nombre( ponderation 3) :");
    scanf("%f",&second);
    printf("entrer 3eme nombre( ponderation 5) :");
    scanf("%f",&third);

    // affiche la moyenne
    float moy;
    moy = ((first*2)+(second*3)+(third*5)) / 10 ;
    printf("la moyenne= %.2f",moy);

    return 0;
}