#include <string.h>     //Inclue la bibliotheque

#include "donnees.h"    //Inclue le fichier données.h
#include "menu.h"       //Inclue le fichier menu.h
#include "action.h"     //Inclue le fichier action.h

//Creation de la fonction main()
int main()
{
    int quitter = 0;

    ListeDonnees* mesDonnees = initialisation(); //initialisation de la liste chainéd
    lectureFichier(mesDonnees); //lecture du fichier, rentre les valeurs dans la liste

    while(quitter == 0)
    {
        menu(mesDonnees);//Appel de la fonction menu
    }

    return 0;
}
