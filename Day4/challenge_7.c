#include <stdio.h>

int main() {
    int nombre , i = 0,y=0,result=0;
    int temp=0;
    printf("entrer le nombre d'elements: ");
    scanf("%d", &nombre);
    int table[nombre];
    for (i = 0; i < nombre; i++)
    {
        printf("entrer l'element %d :", i + 1);
        scanf("%d",&table[i]);
    }

    
   for (i=0;i<nombre;i++){
    for(y=i+1;y<nombre;y++){
        if(table[i]>table[y]){
            temp=table[i];
            table[i]=table[y];
            table[y]=temp;
        }
    }
   }
       for (i = 0; i < nombre; i++)
    {
        printf("%d\n",table[i]);
    }

    
    return 0;
}

