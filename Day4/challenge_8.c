#include <stdio.h>

int main()
{
    int nombre , i = 0;
    printf("entrer le nombre d'elements: ");
    scanf("%d", &nombre);
    int table[nombre],copy_table[nombre];
    for (i = 0; i < nombre; i++)
    {
        printf("entrer l'element %d :", i + 1);
        scanf("%d",&table[i]);
    }
    for ( i = 0; i < nombre ; i++)
    {
        copy_table[i]=table[i];
    }
    

    printf("les element de votre tableaux: \n");
    
    for (i = 0; i < nombre; i++)
    {
        printf("%d\n", table[i]);
    }
    printf("les element copier de votre tableaux: \n");
    for (i = 0; i < nombre; i++)
    {
        printf("%d\n", copy_table[i]);
    }

    return 0;
}