#include <stdio.h>

int main(){
    char car;
    printf("entrer a caractere: ");
    scanf("%c",&car);

    if (car>='A' && car <= 'Z'||car>= 'a' && car<='z'){
        printf("c'est un alphabet\n");
        if (car>='A' && car <= 'Z')
            printf("un alphabet majuscule");
        else
            printf("un alphabet minuscule");
        }
    else
        printf("pas alphabet");
    

    return 0;
}