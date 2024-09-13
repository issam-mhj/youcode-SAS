#include <stdio.h>


int fact(int num){
    int result=1;
    if(num==0)
        return 1;
    else 
        for(int i=1;i<=num;i++){
            result *= i;
        }

        return result;
}



int main() {
    int num;
    printf("entrez le nombre: ");
    scanf("%d",&num);

    printf("le factorial de %d = %d",num,fact(num));

    return 0;
}