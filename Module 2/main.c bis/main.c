#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"
#include "menu.h"

 int main()
 {
     int quitter = 0;

     while(quitter == 0)
     {
        system("CLS");
        menu();
        printf("              Veuillez selectionner votre decision : \n");
        printf("              Continuer   --> 0\n");
        printf("              Quitter     --> 1\n\n");
        printf("                                  -------------------------------------------------\n\n");
        printf("              Vous avez choisi ");
        scanf("%i", &quitter);
     }
    return 0;
 }

