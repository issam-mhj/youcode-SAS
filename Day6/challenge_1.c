#include <stdio.h>

struct personne
{
    char nom[20];
    char prenom[20];
    int age;
};

int main()
{
    struct personne data;

    printf("entrez : \nnom: ");
    scanf("%[^\n]", data.nom);
    getchar();
    printf("prenom: ");
    scanf("%[^\n]", data.prenom);
    getchar();
    printf("age: ");
    scanf("%d", &data.age);

    printf("\n\nvotre nom= %s\n", data.nom);
    printf("votre prenom= %s\n", data.prenom);
    printf("votre age= %d\n", data.age);

    return 0;
}