#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

// Main function of the menu, it initializes

void choix()
{

    //Initialization of the value "a", this value will be scan later for the user's choice

    int a;

    // Viewing of the menu with all the possibilities in it

    printf("-----------Choix du mode------------\n");
    printf(" 1 - Allumer toutes les Led.   \n");
    printf(" 2 - Allumer une Led sur deux. \n");
    printf(" 3 - Allumer une Led sur trois.\n");
    printf(" 4 - Allumer une Led au choix. \n");
    printf(" 5 - Allumer en mode chenille. \n");
    printf("------------------------------------\n");
    scanf("%i", &a);

    //This switch will take in entry the value of "a" and the function will depend on this value.

    switch (a)
    {
        //if a = 1, it's the bCoeur mode so all the DELLs will be lit

        case 1: ;
        Mode_bCoeur();
        break;

        //if a = 2, it's the unSurDeux mode. With this mode, the Arduino will lit just the half of the DELLs at every heartbeat.it

        case 2:
        Mode_unSurDeux();

        break;

        //if a = 3, it's the unSurTrois mode.

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
