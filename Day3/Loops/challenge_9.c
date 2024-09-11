#include <stdio.h>

int main()
{
    int nombre, count = 0;
    printf("Entrer un nombre: ");
    scanf("%d", &nombre);
    if (nombre > 0)
    {
        for (int i = 0; nombre > 0; i++)
        {
            nombre = nombre / 10;
            count++ ;
        }
        printf("Nombre de chiffres = %d",count);
    }
    else{
        printf("entre positif nombre ");
    }
    return 0;
}