#include <stdio.h>

int main() {
    double ans,mois,jours,heures,minutes,secondes;
    printf("entrer le nombre d'annees: ");
    scanf("%lf",&ans);

    mois= ans * 12 ;
    jours= ans * 365 ;
    heures= ans * 8760 ;
    minutes= ans * 525,600;
    secondes= ans * 31,536,000;

    printf("%.2lf annees = %.2lf mois et %.2lf jours et %.2lf heures et %.2lf minutes et %.2lf secondes",ans,mois,jours,heures,minutes,secondes); 

    return 0;

}