#include <stdio.h>

int main()
{
    int nombre , i = 0;
    float moyenne=0;
    printf("entrer le nombre d'elements: ");
    scanf("%d", &nombre);
    int table[nombre];
    for (i = 0; i < nombre; i++)
    {
        printf("entrer l'element %d :", i + 1);
        scanf("%d",&table[i]);
    }

    for (i = 0; i < nombre; i++)
    {
        moyenne += table[i];
    }

    printf("la moyenne = %.2f",moyenne/nombre);


    return 0;
}