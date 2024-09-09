#include <stdio.h>

int main() {
    float a=1093.61;
    float km;
    printf("un programme de conversion de la distance kilometres a yards \n");
    printf("Yards = Km * 1093.61\n");
    printf("entrer la distance en kilometres: ");
    scanf("%f",&km);
    printf("%.2f km = %.2f Yards",km,km*a);
    return 0;
    
}