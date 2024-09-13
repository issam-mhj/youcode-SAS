#include <stdio.h>

int main() {
    int nombre,i;
    printf("entrer un nombre: ");
    scanf("%d",&nombre);

    for(i=1;i<=nombre;i++){
        if(nombre % i==0){
            printf("%d ",i);
        }
        
    }

    return 0;
}