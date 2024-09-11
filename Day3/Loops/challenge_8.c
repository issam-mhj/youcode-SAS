#include <stdio.h>

int main() {
    int nombre;
    printf("Entrer un nombre: ");
    scanf("%d", &nombre);

    int x1 = 0;
    int x2 = 1;
    int x3;
    for (int i = 1; i < nombre ; i++) {
        x3 = x2;  
        x2 += x1;  
        x1 = x3;  
    }

    printf("Fibonacci nombre de %d =  %d\n", nombre, x3);

    return 0;
}