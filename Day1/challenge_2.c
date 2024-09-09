#include <stdio.h> 


int main(){
    float a= 273.15;
    float c;
    printf("programme qui conversion de la temperature :\n");
    printf("K= C + 273.15\n");
    printf("entrer C: ");
    scanf("%f",&c);
    printf("K= %.2f",c+a);
    return 0 ;
}