#include <stdio.h>

int main() {
    int count,num,binarynum[30]={0};
    char hexadecimal[3]={0};
    printf("un programme qui afficher la valeur equivalente en binaire et en hexadecimal");
    printf("entrer a nombre: ");
    scanf("%d",&num);
    int i= 0;
    count = 0;
    int num2 = num;
    //transfere num to binaire 
    
    while(num>0){
        binarynum[i++]=num % 2 ; 
        num = num / 2;
        count ++ ;  
    }
    
    // print the number in binaire 
    printf("transfere to binaire: ");

    for (i=count-1;i>=0;i--){
        printf("%d",binarynum[i]);
    }
    printf("\n");

    //transfere num to hexadecimal 
     i=0;
     count = 0;
     while(num2>0){
        if (num2 % 16 <=9 )
            hexadecimal[i++]=(num2 % 16) + '0' ; 
        else 
            hexadecimal[i++]= ((num2 % 16)-10)+ 'A'; 
        num2 = num2 / 16;
        count ++ ;  
    }
    // print the number in hexadecimal 
    printf("transfere to hexadecimal: ");
      for(i=count-1;i>=0;i--){
        printf("%c",hexadecimal[i]);
    }


}