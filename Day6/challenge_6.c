#include <stdio.h> 

struct produit {
    char nom[20];
    int prix;
    int quantite;
};


int main(){
    struct produit tprod[4];
    for(int i=0;i<4;i++){
        printf("entrez le nom de produit: ");
        scanf("%[^\n]",tprod[i].nom);
        getchar();
        printf("entrez le prix: ");
        scanf("%d",&tprod[i].prix);
        getchar();
        printf("entrez la quantite: ");
        scanf("%d",&tprod[i].quantite);
        getchar();
    }

    printf("votre produits: \n");
    for(int i=0;i<4;i++){
        printf("la produit %d\n",i+1);
        printf("nom= %s\nle prix= %d\nla quantite= %d",tprod[i].nom,tprod[i].prix,tprod[i].quantite);
    }
    return 0;
}