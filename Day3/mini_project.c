#include <stdio.h>

#define max 100

int main()
{
    int i, choice;
    char titre[max];
    char description[max];
    char date[max];
    int indices[max];
    int mark = -1;
    int free = 0;

    printf("appuyez sur:\n1 si vous souhaitez ajouter une tache\n");
    printf("2: si vous souhaitez supprimer une tache\n");
    printf("3: si vous le souhaitez rechercher une Tache\n");
    printf("4: si vous le souhaitez fonctionnalites Requises\n");
    printf("0: pour quitter\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Titre: ");
        fgets(titre, max, stdin);
        getchar();
        printf("Description: ");
        fgets(description, max, stdin);
        getchar();
        printf("Date d'echeance: ");
        fgets(date, max, stdin);
        getchar();
        for (i = 0; i <= max - 1; i++)
        {
            indices[i] = i + 1;
        }
        indices[max - 1] = -1;
    }

    else if (choice == 2)
    {
        
    }
}