#include <stdio.h>


int max(int a, int b){
    if(a>b)
        return a;
    else 
        return b;
}



int main() {
    int a,b;
    printf("entrez a: ");
    scanf("%d",&a);
    printf("entrez b: ");
    scanf("%d",&b);

    printf("le maximum entre %d et %d = %d",a,b,max(a,b));

    return 0;
}