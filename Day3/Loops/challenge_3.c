#include <stdio.h>

int main() {
    int nombre,result=0;
    printf("entrer un nombre: ");
    scanf("%d",&nombre);
    for(int i=1; i<= nombre; i++){
        result += i;
    }
    printf("la somme des %d premiers nombres : %d",nombre,result);
}