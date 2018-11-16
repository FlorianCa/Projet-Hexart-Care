#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"
#include "menu.h"

//The main program, it just contains all the "#include", that's the foundation of the program.

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

