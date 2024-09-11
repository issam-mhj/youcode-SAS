#include <stdio.h>

int main() {
    int nombre,reverse=0;
    printf("entre un nombre entier : ");
    scanf("%d",&nombre);

    for(int i=0;nombre>0;i++){
        reverse = (reverse*10) + (nombre % 10);
        nombre = nombre /10 ;  
    }

    printf("le nombre reversed = %d",reverse);
    
    return 0;
}