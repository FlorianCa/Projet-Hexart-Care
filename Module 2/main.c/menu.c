#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

void choix() // Commande du choix du mode.
{
    int a;
    printf("-----------Choix du mode----------\n"); // Affichage des possibilitées pour l'utilisateur.
    printf(" 1 - Allumer toutes les Led.\n");
    printf(" 2 - Allumer une Led sur deux.\n");
    printf(" 3 - Allumer une Led sur trois.\n");
    printf(" 4 - Allumer une Led au choix.\n");
    printf(" 5 - Allumer en mode chenille.\n");
    printf("----------------------------------\n");
    scanf("%i", &a);

    switch (a) // Les différentes entrées de l'utilisateur.
    {
        case 1: ;
        Mode_bCoeur(); // Selectionne le Mode_bCoeur qui allume toutes les Led.
        break;

        case 2:
        Mode_unSurDeux(); // Selectionne le Mode_unSurDeux qui allume une Led sur deux.

        break;

        case 3:
        Mode_unSurTrois(); // Selectionne le Mode_unSurTrois qui allume une Led sur trois.

        break;

        case 4:
        Mode_auChoix(); // Selectionne le Mode_auChoix qui allume une Led au choix.

        break;

        case 5:
        Mode_chenille(); // Selectionne le Mode_chenille qui allume les Led une à une.

        break;

        default:

        return 0;

    }

}
