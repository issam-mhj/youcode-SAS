#include <stdio.h>

int main() {
    int nombre=0,count=0,det=0;
    printf("entrer a nombre: ");
    scanf("%d",&nombre);

    for(int i=1;i<=nombre;i++){
        for(int y=1;y<=nombre;y++)
            if(i%y==0)
                det++;

        if(det==2)
            printf("ce nombre %d est premiere\n",i);    
         
        det=0;
    }

    return 0;
}