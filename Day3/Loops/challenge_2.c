#include <stdio.h>

int main(){
    int nombre,result=1;
    printf("entrer a nombre : ");
    scanf("%d",&nombre);

    for (int i = nombre ; i > 0 ; i--){
        result *=   i ;
    }
    printf("%d",result);
}