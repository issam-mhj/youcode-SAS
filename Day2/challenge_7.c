#include <stdio.h>

int main() {
    char car; 
    printf("entrer un caractere: ");
    scanf("%c",&car);

    if (car>='A' && car <= 'Z')
        printf("un alphabet majuscule");
    else
        printf("pas majuscule");
    
    return 0;
}