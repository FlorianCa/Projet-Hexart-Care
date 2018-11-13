#include"menu.h"

int choix
{
    int a
    printf("Choix du mode\n");
    printf(" 1 - Mode_BCoeur\n");
    printf(" 2 - Mode_1sur2\n");
    printf(" 3 - Mode_1sur3\n");
    printf(" 4 - Mode_auchoix\n");
    printf(" 5 - Mode_Chenille\n");
    scanf(" Indiquez votre choix: %i\n");

    switch (a)
    {
        case 1:
        void Mode_BCoeur();

        break;

        case 2:
        void Mode_1sur2();

        break;

        case 3:
        void Mode_1sur3();

        break;

        case 4:
        void Mode_auchoix();

        break;

        case 5:
        void Mode_Chenille();

        break;

        default:

        return 0;

    }

}
