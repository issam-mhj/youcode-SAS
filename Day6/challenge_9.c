#include <stdio.h>

struct cbank{
    char nom[20];
    float sold;
};

float ajj(float add,float addto) {
    add = add+addto;
    return add;
}

int main(){
    struct cbank bankc;
    float montant;
    printf("entre le nom: ");
    scanf("%[^\n]",bankc.nom);
    getchar();
    printf("entre solde: ");
    scanf("%f",&bankc.sold);
    printf("Entrez le montant que vous souhaitez ajouter: ");
    scanf("%f",&montant);
    printf("%s votre solde apres l'ajout= %.2f",bankc.nom,ajj(montant,bankc.sold));

    return 0;
}
