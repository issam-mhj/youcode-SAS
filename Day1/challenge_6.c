#include <stdio.h> 

int main () {
    float a,b;

    //demande a et b 
    printf("entrer a : ");
    scanf("%f",&a);
    printf("entrer b : ");
    scanf("%f",&b);

    //affiche résultats
    printf("%.2f + %.2f = %.2f\n",a,b,a+b);
    printf("%.2f - %.2f = %.2f\n",a,b,a-b);
    printf("%.2f * %.2f = %.2f\n",a,b,a*b);
    if (b==0)
        printf("on ne peut pas diviser un nombre par 0");
    else 
        printf("%.2f / %.2f = %.2f\n",a,b,a/b);

    return 0;
}