#include <stdio.h>


int somme(int a, int b){
    return a+b;
}



int main() {
    int a,b;
    printf("entrez a: ");
    scanf("%d",&a);
    printf("entrez b: ");
    scanf("%d",&b);

    printf("la somme de %d et %d = %d",a,b,somme(a,b));

    return 0;
}