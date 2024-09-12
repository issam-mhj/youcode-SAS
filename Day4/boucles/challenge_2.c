#include <stdio.h>

int main(){
    int i,ligne;
    printf("entrer le nombre de ligne: ");
    scanf("%d",&ligne);
    int count=0;
    int detect=ligne -1 ;
    for(i=0;i<ligne*2;i+=2){
        for(int y=0;y<detect;y++){
            printf(" ");
        }
        for(int j=0;j<=count;j++){
            printf("*");
        }
        detect--;
        count+=2;
        printf("\n");
    }


    return 0;
}