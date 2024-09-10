#include <stdio.h>

int main() {
    float a,b,somme;
    printf("entrer a : ");
    scanf("%f",&a);
    printf("entrer b : ");
    scanf("%f",&b);

    somme = a+b;
    printf("%.2f + %.2f = %.2f\n",a,b,somme);
    
    if (a == b )
        printf("le triple de leur somme: %.2f",somme * 3);
    
    return 0;
}