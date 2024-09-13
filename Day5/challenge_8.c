#include <stdio.h>


int check(int nombre){
    if(nombre%2==0)
        return 1;
    else 
        return 0;
}

int main(){
    int nombre ;
    printf("entrer un nombre: ");
    scanf("%d",&nombre);
    if (check(nombre)==0)
        printf("l'entier est impair");
    else
        printf("l'entier est pair");

    return 0;
}