#include <stdio.h> 

int main() {
    int number;
    printf("entrer un nombre: ");
    scanf("%d",&number);

    if (number%2 == 0)
        printf("le nombre %d est paire ",number);
    else 
        printf("le nombre %d est impair ",number);

    return 0;

}