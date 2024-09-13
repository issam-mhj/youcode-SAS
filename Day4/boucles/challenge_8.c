#include <stdio.h>

int main()
{
    int base, expo, result = 1, i=0;
    printf("entrer la base(positive): ");
    scanf("%d", &base);
    printf("entrer l'exposant(non negatif): ");
    scanf("%d", &expo);
    if (base > 0 && expo >= 0)
    {
        while (i < expo)
        {
            result *=  base;
            i++;
        }
        printf("result de la base %d et l'exposant %d = %d", base, expo, result);
    }
    else
    {
        printf("entrer autre nombres");
    }

    return 0;
}