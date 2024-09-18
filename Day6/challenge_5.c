#include <stdio.h>

struct book {
    char titre[20];
    char auteur[20];
    int annee;
};

struct book books(){
    struct book newBook;
    printf("entrez le titre: ");
    scanf("%[^\n]",newBook.titre);
    getchar();
    printf("entrez le nom d'auteur: ");
    scanf("%[^\n]",newBook.auteur);
    getchar();
    printf("entrez l'annee: ");
    scanf("%d",&newBook.annee);
    return newBook;
}

int main() {
    struct book data=books(); 
    printf("le titre : %s\nle nom d'auteur: %s\nl'annee: %d",data.titre,data.auteur,data.annee);
    return 0; 
}