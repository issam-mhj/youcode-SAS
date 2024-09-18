#include <stdio.h>

struct etudiant {
    char nom[20];
    char prenom[20];
    int notes[5];
};


int main(){
    struct etudiant data;
    printf("entrez : \nnom: ");
    scanf("%[^\n]", data.nom);
    getchar();
    printf("prenom: ");
    scanf("%[^\n]", data.prenom);
    getchar();
    for(int i=0;i<5;i++){
        printf("la note %d: ",i+1);
        scanf("%d",&data.notes[i]);
    }

    printf("\n\nvotre Nom= %s\n",data.nom);
    printf("votre prenom= %s\n",data.prenom);
    printf("votre notes : \n");
    for(int i=0;i<5;i++){
        printf("la note %d = %d\n",i+1,data.notes[i]);
    }
    return 0;
}