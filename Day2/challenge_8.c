#include <stdio.h>

int main() {
    float mention;

    printf("entrer votre mention: ");
    scanf("%f",&mention);

    if(mention<10)
        printf("recale");
    else if(mention>=10 && mention<12)
        printf("passable");
    else if (mention >= 12 && mention<14)
        printf("assez bien");
    else if (mention>= 14 && mention <16)
        printf("bien");
    else if (mention>= 16 && mention<=20 )
        printf("tres bien");
    else 
        printf("entrer a nouveau moyenne");

    return 0;
}