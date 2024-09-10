#include <stdio.h>

int main() {
    int jrs,mois,ans;

    printf("entrer l'annee: ");
    scanf("%d",&ans);
    printf("entrer le mois: ");
    scanf("%d",&mois);
    printf("entrer le jour: ");
    scanf("%d",&jrs);

    switch (mois)
    {
    case 1:
        printf("%d-Janvier-%d",jrs,ans);
        break;
    case 2:
        printf("%d-Fevrier-%d",jrs,ans);
        break;
    case 3:
        printf("%d-Mars -%d",jrs,ans);
        break;
    case 4:
        printf("%d-Avril -%d",jrs,ans);
        break;
    case 5:
        printf("%d-Mai -%d",jrs,ans);
        break;
    case 6:
        printf("%d-Juin -%d",jrs,ans);
        break;
    case 7:
        printf("%d-Juillet -%d",jrs,ans);
        break;
    case 8:
        printf("%d-Aout -%d",jrs,ans);
        break;
    case 9:
        printf("%d-Septembre -%d",jrs,ans);
        break;
    case 10:
        printf("%d-Octobre -%d",jrs,ans);
        break;
    case 11:
        printf("%d-Novembre -%d",jrs,ans);
        break;
    case 12:
        printf("%d-Decembre -%d",jrs,ans);
        break;
    
    
    default:
        printf("entrer une autre month");
        break;
    }
    
    return 0;
}