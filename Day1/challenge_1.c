#include <stdio.h> 

int main() {
    char nom[20],prenom[20],email[40],sexe;
    int age;
    
    //ask for information

    printf("ton nom: ");
    scanf("%s",&nom);
    printf("ton prenom: ");
    scanf("%s",&prenom);
    printf("votre age: ");
    scanf("%i",&age);
    printf("femelle ou male (F/M): ");
    scanf(" %c",&sexe);

    printf("votre email: ");
    scanf("%s",&email);

    // print information 

    printf("nom : %s\n",nom);
    printf("prenom : %s\n",prenom);
    printf("age : %i\n",age);
    printf("sexe : %c\n",sexe);
    printf("email : %s\n",email);

    return 0;



}