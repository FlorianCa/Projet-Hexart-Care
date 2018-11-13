#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

void choix()
{
    int a;
    printf("Choix du mode\n");
    printf(" 1 - Mode_bCoeur\n");
    printf(" 2 - Mode_unSurDeux\n");
    printf(" 3 - Mode_unSurTrois\n");
    printf(" 4 - Mode_auChoix\n");
    printf(" 5 - Mode_chenille\n");
    printf("Indiquez votre choix\n");
    scanf("%i", &a);

    switch (a)
    {
        case 1:
        Mode_bCoeur();

        break;

        case 2:
        Mode_unSurDeux();

        break;

        case 3:
        Mode_unSurTrois();

        break;

        case 4:
        Mode_auChoix();

        break;

        case 5:
        Mode_chenille();

        break;

        default:

        return EXIT_SUCCESS
        ;

    }

}
