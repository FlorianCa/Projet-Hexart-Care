//Include the "données.h" file.

#include "donnees.h"

//Include the "menu.h" file.

#include "menu.h"

//Include the "action.h" file.

#include "action.h"

//Initialization of the menu.

void menu(ListeDonnees *mesDonnees)
{

    //Initialization of the three values that we're going to need during the choice.

    int choix;
    int choixTri = 0;
    int choixOrdre = 0;

    //This is the command console interface.

    printf("----------------------------------------BIENVENUE---------------------------------------\n");
    printf("                             DISPONIBLE -> 6 FONCTIONNALITES                            \n");
    printf("            1 -> Afficher les donnees dans l'ordre du fichier .csv                      \n");
    printf("            2 -> Afficher les donnees en ordre croissant/decroissant                    \n");
    printf("            3 -> Rechercher et afficher les donnees pour un temps particulier           \n");
    printf("            4 -> Afficher la moyenne du pouls dans une plage de temps donnee            \n");
    printf("            5 -> Afficher le nombre de lignes de donnees actuellement en memoire        \n");
    printf("            6 -> Rechercher et afficher les max/min de pouls                            \n");
    printf("----------------------------------------------------------------------------------------\n");
    printf("                  FAITES VOTRE CHOIX PARMI LES FONCTIONNALITES PROPOSEES                \n");
    printf(" Votre choix est ");

    //Here we scan the user's choice.

    scanf("%d", &choix);

    //The choice is tested, and so according to the value the user wrote, it will take a certain way.

    switch(choix)
    {

        //The 1st case, if the user prints 1 in the menu, we've got a function which print the data within the .csv file order.

    case 1 :

        //Calling of the "Afficher les données" function in the .csv file order.

        afficherListe(mesDonnees, choixOrdre);

        break;

        //The 2nd case, if the user print 2 in the menu, we've got a function which print the data in an increasing or decreasing order.

    case 2 :

        //Ask the user if he wants to sort the data by time or by pulsations.

        printf("Vous les vous triez par pouls : 1 ou par temps : 2 ? ");
        scanf("%i", &choixTri);

        //Ask the user if he wants to sort the data in an increasing or a decreasing order.

        printf("vous les vous afficher par ordre croissant : 1 ou decroissant : 2 ? ");
        scanf("%i", &choixOrdre);

        //Sorting function.

        triBulle(mesDonnees, choixTri);

        //The function which shows the list depending on the order the user chose.

        afficherListe(mesDonnees, choixOrdre);

        break;

        //The 3rd case, if the user print 3 in the menu, we've got a function which print the data in an increasing or decreasing order.

    case 3 :

        printf("%i", recherche(mesDonnees)); //Appel fonction Rechercher et afficher les donnees pour un temps particulier

        break;
    case 4 :
        //Appel fonction Afficher la moyenne du pouls dans une plage de temps donnee
        break;
    case 5 :
        //Appel fonction Afficher le nombre de lignes de donnees actuellement en memoire
        break;
    case 6 :
        //Appel fonction Rechercher et afficher les max/min de pouls
        break;
    case 7 :
        //Appel fonction quitter
        break;
    }

}
