#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

// Main function of the menu, it initializes

void choix()
{

    //Initialization of the value "a", this value will be scan later for the user's choice

    int a;

    //Viewing of the menu with all the possibilities in it

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
        //If a = 1, it's the bCoeur mode so all the LEDs will be lit

    case 1:
        ;
        Mode_bCoeur();
        break;

        //If a = 2, it's the unSurDeux mode. With this mode, the Arduino will lit just the half of the LEDs at every heartbeat.

    case 2:
        Mode_unSurDeux();

        break;

        //If a = 3, it's the unSurTrois mode. With this mode, the Arduino will lit just one of three LED at every heartbeat.

    case 3:
        Mode_unSurTrois();

        break;

        //If a = 3, it's the "auChoix" mode so with that, just the choosen LED will be lit and no other.

    case 4:
        Mode_auChoix();

        break;

        //If a = 5 it's the "chenille" mode, it's a sort of queue, When one LED goes lit, the former LED goes off.

    case 5:
        Mode_chenille();

        break;

    default:

        return 0;

    }

}
