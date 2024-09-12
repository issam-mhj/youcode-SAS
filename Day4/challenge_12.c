#include <stdio.h>

int main()
{
    int nombre , i = 0;
    printf("entrer le nombre d'elements: ");
    scanf("%d", &nombre);
    int table[nombre];
    for (i = 0; i < nombre; i++)
    {
        printf("entrer l'element %d :", i + 1);
        scanf("%d",&table[i]);
    }

    printf("les element paire de votre tableaux: \n");
    
    for (i = 0; i < nombre; i++)
    {
        if (table[i] %2 == 0)
            printf("%d\n", table[i]);
    }


    return 0;
}