#include <stdio.h>

int main(){

    char alpha;
    printf("entrer un caractere: ");
    scanf("%c",&alpha);

    //vérifie si un caractère saisi par l'utilisateur est une voyelle ou non

    switch (alpha)
    {
    case 'a':
        printf("c'est un voyelle");
        break;
    case 'A':
        printf("c'est un voyelle");
        break;    
    case 'e':
        printf("c'est un voyelle");
        break;
    case 'E':
        printf("c'est un voyelle");
        break;
    case 'I':
        printf("c'est un voyelle");
        break;
    case 'i':
        printf("c'est un voyelle");
        break;
    case 'o':
        printf("c'est un voyelle");
        break;
    case 'O':
        printf("c'est un voyelle");
        break;
    case 'u':
        printf("c'est un voyelle");
        break;
    case 'U':
        printf("c'est un voyelle");
        break;
    case 'y':
        printf("c'est un voyelle");
        break;
    case 'Y':
        printf("c'est un voyelle");
        break;
    default:
        printf("c'est une consonne");
        break;
    }
    return 0;
}