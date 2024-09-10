#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    float delta,x,x1,x2 ;
    //ax² + bx + c = 0

    printf("enter a: ");
    scanf("%f",&a);
    printf("enter b: ");
    scanf("%f",&b);
    printf("enter c: ");
    scanf("%f",&c);

    // b² - 4ac
    delta= pow(b,2) - (4*a*c);
    float sq_delta = sqrt(delta);
    if (delta<0)
        printf("L'equation n'a pas de solution reelle");
    else if (delta==0){
        printf("L'equation a une solution reelle double");
        x= -b / (2*a);
        printf("Les solutions de l'equation : %.2f",x);
        }
    else {
        printf("L'equation a deux solutions reelles distinctes");
        x1= (-b+sq_delta) / (2*a);
        x2 = (-b - sq_delta ) / (2*a);
        printf("Les solutions de l'equation : \n x1= %.2f\nx2= %.2f",x1,x2);
        }

    return 0;
}