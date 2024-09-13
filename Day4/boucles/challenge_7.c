#include <stdio.h>

int main() {
    int num;
    printf("entrer a nombre: ");
    scanf("%d",&num);
    int x1,x2,x3=0;
    x1=0;
    x2=1;    
    for(int i=1;i<=num;i++){ 
        x3=x2; 
        x2=x1+x2; 
        x1=x3;   
    }

    printf("%d",x3);
}