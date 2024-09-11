#include <stdio.h>

int main() {
    int nombre,result=0;
    printf("entrer un nombre: ");
    scanf("%d",&nombre);

    for (int i=1 ;i<= nombre*2;i+=2){
        printf("%d ",i);
    }
}