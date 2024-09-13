#include <stdio.h>


int mult(int a, int b){
    return a*b;
}



int main() {
    int a,b;
    printf("entrez a: ");
    scanf("%d",&a);
    printf("entrez b: ");
    scanf("%d",&b);

    printf("la multiplication de %d et %d = %d",a,b,mult(a,b));
    return 0;
}