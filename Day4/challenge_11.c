#include <stdio.h>

int main()
{
    int nombre , i = 0;
    printf("entrer le nombre d'elements: ");
    scanf("%d", &nombre);

    int table[nombre],elem_remplace,nv_valeur;
    for (i = 0; i < nombre; i++)
    {
        printf("entrer l'element %d :", i + 1);
        scanf("%d",&table[i]);
    }
    printf("entrer l'element qui va remplace: ");
    scanf("%d", &elem_remplace);
    printf("entrer la nouvelle valeur: ");
    scanf("%d", &nv_valeur);

    for (i = 0; i < nombre; i++)
    {
        if (elem_remplace==table[i]){
            table[i]=nv_valeur;
        }
    }
    
    printf("le tableau apres la modification\n");
    for (i = 0; i < nombre; i++)
    {
        printf("%d\n",table[i]);
    }
    return 0;
}