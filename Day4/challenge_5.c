#include <stdio.h>

int main()
{
    int nombre , i = 0,min;
    printf("entrer le nombre d'elements: ");
    scanf("%d", &nombre);
    int table[nombre];
    for (i = 0; i < nombre; i++)
    {
        printf("entrer l'element %d: ", i + 1);
        scanf("%d",&table[i]);
    }
    min=table[0];
    
    for (i = 0; i < nombre; i++)
    {
        if (table[i]<min)
            min = table[i];
    }

    printf("le minimum de votre tableaux: %d\n",min);

    return 0;
}