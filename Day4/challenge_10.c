#include <stdio.h>

int main()
{
    int nombre , i = 0,detect=0;
    printf("entrer le nombre d'elements: ");
    scanf("%d", &nombre);

    int table[nombre],elem_recherche;
    for (i = 0; i < nombre; i++)
    {
        printf("entrer l'element %d :", i + 1);
        scanf("%d",&table[i]);
    }
    printf("entrer l'element a recherche: ");
    scanf("%d", &elem_recherche);

    for (i = 0; i < nombre; i++)
    {
        if (table[i]==elem_recherche)
            detect++;
    }
    if (detect==0)
        printf("l'element n'est pas present ");
    else
        printf("l'element est present"); 

    return 0;
}