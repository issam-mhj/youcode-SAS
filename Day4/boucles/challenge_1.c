#include <stdio.h>

int main() {
    int nombre;
    printf("entrer a nombre : ");
    scanf("%d",&nombre);

    for (int i=10 ; i>=1 ; i--){
        printf("%d * %d = %d \n",nombre,i,nombre*i);
    }
}