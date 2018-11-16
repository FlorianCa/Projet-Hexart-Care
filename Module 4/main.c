#include <string.h>
#include "donnees.h"
#include "menu.h"
#include "actions.h"

//Creation of the main() function

int main()
{

    //Initialization of a variable which will determine if the user wants to launch the program again or not.

    int quitter = 0;

    //Initialization of the chained list.

    ListeDonnees* mesDonnees = initialisation();

    //Reading of the file, puts the values within the list.

    lectureFichier(mesDonnees);

    while(quitter == 0 )
    {

        //Cleans the console after an utilization.

        system("CLS");

        //Calling the menu function.

        menu(mesDonnees);
        printf("              Veuillez selectionner votre decision : \n");
        printf("              Continuer   --> 0\n");
        printf("              Quitter     --> 1\n\n");
        printf("                                  -------------------------------------------------\n\n");
        printf("              Vous avez choisi ");
        scanf("%i", &quitter);
    }
    return 0;
}
