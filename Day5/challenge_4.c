#include <stdio.h>


int min(int a, int b){
    if(a>b)
        return b;
    else 
        return a;
}



int main() {
    int a,b;
    printf("entrez a: ");
    scanf("%d",&a);
    printf("entrez b: ");
    scanf("%d",&b);

    printf("le minimum entre %d et %d = %d",a,b,min(a,b));

    return 0;
}