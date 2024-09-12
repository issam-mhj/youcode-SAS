#include <stdio.h>

int main()
{
    int nombre , i = 0,max;
    printf("entrer le nombre d'elements: ");
    scanf("%d", &nombre);
    int table[nombre];
    for (i = 0; i < nombre; i++)
    {
        printf("entrer l'element %d: ", i + 1);
        scanf("%d",&table[i]);
    }
    max=table[0];
    
    for (i = 0; i < nombre; i++)
    {
        if (table[i]>max)
            max = table[i];
    }

    printf("le maximum de votre tableaux: %d\n",max);

    return 0;
}