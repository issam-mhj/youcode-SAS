#include <stdio.h>

int main() {
    int nombre_base,nombre_expos,result=1;
    printf("entrer un nombre(base): ");
    scanf("%d",&nombre_base);
    printf("entrer un nombre(exposant): ");
    scanf("%d",&nombre_expos);
    for(int i=1;i<=nombre_expos;i++){
        result *= nombre_base;
    }
    printf("le nombre %d exposant %d = %d",nombre_base,nombre_expos,result);
    return 0;
}