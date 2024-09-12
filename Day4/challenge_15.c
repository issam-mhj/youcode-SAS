#include <stdio.h>

int main()
{
    int nombre1,nombre2,nombretot,i = 0,j=0;
    printf("entrer le nombre d'elements (tableau 1): ");
    scanf("%d", &nombre1);
    int table1[nombre1];
    for (i = 0; i < nombre1; i++)
    {
        printf("entrer l'element %d :", i + 1);
        scanf("%d",&table1[i]);
    }
    printf("entrer le nombre d'elements(tableau 2): ");
    scanf("%d", &nombre2);
    int table2[nombre2];
    for (i = 0; i < nombre2; i++)
    {
        printf("entrer l'element %d :", i + 1);
        scanf("%d",&table2[i]);
    }
    nombretot = nombre1+nombre2;
    int tablefus[nombretot];
    for (i = 0; i < nombretot; i++)
    {
        if (i<nombre1)
            tablefus[i]=table1[i];
        else{
            tablefus[i] = table2[j];
            j++;
            }
    }

    printf("le tableau fisionne: \n");
    for (i = 0; i < nombretot; i++)
    {
        printf("%d\n", tablefus[i]);
    }
}