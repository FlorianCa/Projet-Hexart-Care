#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

// Main function of the menu, it initializes

void menu()
{

    //Initialization of the value "a", this value will be scan later for the user's choice

    int choix;

    //Viewing of the menu with all the possibilities in it

    printf("   ------------Choix du mode-----------\n");
    printf("   | 1 - Allumer toutes les Led.      |\n");
    printf("   | 2 - Allumer une Led sur deux.    |\n");
    printf("   | 3 - Allumer une Led sur trois.   |\n");
    printf("   | 4 - Allumer une Led au choix.    |\n");
    printf("   | 5 - Allumer en mode chenille.    |\n");
    printf("   | 6 - Allumer en mode fade.        |\n");
    printf("   | 7 - Allumer en demi-chenille.    |\n");
    printf("   | 8 - Allumer en mode chenillard.  |\n");
    printf("   | 9 - Allumer en mode aller-retour.|\n");
    printf("   ------------------------------------\n");

    scanf("%i", &choix);

    //This switch will take in entry the value of "a" and the function will depend on this value.

    switch (choix)
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

        //If a = 5 it's the "chenille" mode, it's a sort of queue, when a LED goes lit, the former LED goes off.

    case 5:
        Mode_chenille();

        break;

        //If a = 6 it's the "fade" mode, at the start, all the LEDs are lit and they turn off one after the other.

    case 6:
        Mode_fade();

        break;

    case 7:
        Mode_moitie();

        break;

    case 8:
        Mode_chenillard();

        break;

    case 9:
        Mode_allerRetour();

        break;

    default:

        return 0;

    }

}
