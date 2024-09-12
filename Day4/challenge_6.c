#include <stdio.h>

int main()
{
    int nombre , i = 0,result=0, facteur;
    printf("entrer le nombre d'elements: ");
    scanf("%d", &nombre);
    printf("entrer le facteur : ");
    scanf("%d", &facteur);
    int table[nombre];
    for (i = 0; i < nombre; i++)
    {
        printf("entrer l'element %d :", i + 1);
        scanf("%d",&table[i]);
    }

    
    for (i = 0; i < nombre; i++)
    {
        printf("%d x %d = %d\n",facteur,table[i],facteur*table[i]);
    }
    
    return 0;
}