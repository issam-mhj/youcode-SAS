#include <stdio.h>

int main()
{
    int nombre , i = 0,result=0;
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
        result += table[i];
    }
    printf("la somme totale= %d \n",result);
    
    return 0;
}