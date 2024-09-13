#include <stdio.h>
#include <string.h>


void invers(char name[100]){
    int num= strlen(name);
    int i=0;
    for(i=num; i >= 0 ;i--){
        if(name[i] !='\0')
            printf("%c",name[i]);
    }
}

int main(){
    char name[100]={0};
    printf("entrez your name: ");
    scanf("%[^\n]",&name);
    invers(name);

    return 0;
}