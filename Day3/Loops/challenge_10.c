#include <stdio.h>

int main()
{
    int nombre, result=0;
    printf("entrer un nombre: ");
    scanf("%d",&nombre);
    
    for(int i=0;i<=nombre;i++){
        result+= i;
    }
    printf(" la somme est = %d",result);
    return 0;
}