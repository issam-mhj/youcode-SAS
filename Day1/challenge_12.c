#include <stdio.h>

int main() {
    int nombre,reverse=0;
    printf("programme qui afficher un nombre entier dans l'ordre inverse: \n");
    printf("entre un nombre entier a quatre chiffres: ");
    scanf("%d",&nombre);

    //revrese le nombre 

    for(int i=0;i<4;i++){
        reverse = (reverse*10) + (nombre % 10);
        nombre = nombre /10 ;  
    }

    printf("le nombre reversed = %d",reverse);
    
    return 0;
}