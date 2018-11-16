#include "donnees.h"
#include "menu.h"

void menu(ListeDonnees *mesDonnees)
{

    //Initialization of multiple inconstant values.

    int choix;
    int choixTri = 0;
    int choixOrdre = 0;
    int nb;
    int valTemps;
    int valPouls;
    int moy;

    //Console's graphical rendering

    printf("              ----------------------------------------BIENVENUE----------------------------------------\n");
    printf("                                           DISPONIBLE -> 6 FONCTIONNALITES                            \n");
    printf("                          1 -> Afficher les donnees dans l'ordre du fichier .csv                      \n");
    printf("                          2 -> Afficher les donnees en ordre croissant/decroissant                    \n");
    printf("                          3 -> Rechercher et afficher les donnees pour un temps particulier           \n");
    printf("                          4 -> Afficher la moyenne du pouls dans une plage de temps donnee            \n");
    printf("                          5 -> Afficher le nombre de lignes de donnees actuellement en memoire        \n");
    printf("                          6 -> Rechercher et afficher les max/min de pouls                            \n");
    printf("                          7 -> Quitter                                                                \n");
    printf("              ----------------------------------------------------------------------------------------\n");
    printf("                                FAITES VOTRE CHOIX PARMI LES FONCTIONNALITES PROPOSEES                \n");
    printf("              ----------------------------------------------------------------------------------------\n\n");
    printf("               Vous avez choisi ");
    scanf("%d", &choix);
    printf("\n");


    //The main switch, the way that switch take is determined by the user's choice.

    switch(choix)
    {
    case 1 :

        printf("              ----------------------------------------------------------------------------------------\n\n");
        printf("              Veuillez selectionner votre type d'affichage : \n");
        printf("              Deroissant   --> 1\n");
        printf("              Croissant    --> 2\n\n");
        printf("                                  -------------------------------------------------\n\n");
        printf("              Vous avez choisi ");
        scanf("%i", &choixOrdre);
        printf("\n");
        printf("              ----------------------------------------------------------------------------------------\n\n");

        //Calling the "afficher liste" function. It prints the data within the selected order.

        afficherListe(mesDonnees, choixOrdre);

        break;
    case 2 :

        printf("              ----------------------------------------------------------------------------------------\n\n");
        printf("              Veuillez selectionner votre choix concernant le tri : \n");
        printf("              Pouls   --> 1\n");
        printf("              Temps   --> 2\n\n");
        printf("                                  -------------------------------------------------\n\n");
        printf("              Vous avez choisi ");
        scanf("%i", &choixTri);
        printf("\n");
        printf("                                  -------------------------------------------------\n\n");
        printf("              Veuillez selectionner votre type d'affichage : \n");
        printf("              Croissant   --> 1\n");
        printf("              Decroissant --> 2\n\n");
        printf("                                  -------------------------------------------------\n\n");
        printf("              Vous avez choisi ");
        scanf("%i", &choixOrdre);
        printf("\n");
        printf("              ----------------------------------------------------------------------------------------\n\n");

        //Prints the sorted data, the sort is selected by the user.
        triBulle(mesDonnees, choixTri);
        afficherListe(mesDonnees, choixOrdre);


        break;
    case 3 :

        printf("              ----------------------------------------------------------------------------------------\n");
        printf("                                      Voici la liste complete des temps releve\n");
        printf("              ----------------------------------------------------------------------------------------\n\n");

        //Define a structure pointer. It's equal to the start of the list.

        Donnees *actuel = mesDonnees->debut;

        //While this pointer ist NULL, the list's course continue.

        while(actuel != NULL)
        {
            printf("                                                temps : %i\n", actuel->temps);

            //Path to the structure following the list.

            actuel = actuel->suivant;

        }

        printf("\n");
        printf("                                  -------------------------------------------------\n");
        printf("              Veuillez selectionner le temps de votre choix parmi la liste ci-dessus \n");
        printf("              Votre temps choisi est : ");
        scanf("%i", &valTemps);
        printf("                                  -------------------------------------------------\n\n");

        valPouls = recherche(mesDonnees, valTemps);

        printf("                                         La valeur de votre pouls est de: %i\n", valPouls);
        printf("\n");
        printf("              ----------------------------------------------------------------------------------------\n\n");

        break;
    case 4 :
        moy = moyenne(mesDonnees);
        printf("                                  -------------------------------------------------\n");
        printf("                                             La moyenne des pouls est de : %i\n", moy);
        printf("              ----------------------------------------------------------------------------------------\n\n");

        //Calling the function that prints the average pulse in a time range.

        break;
    case 5 :
        nb = parcourliste(mesDonnees);
        printf("                                  -------------------------------------------------\n");
        printf("                                            Il y a actuellement %i ligne(s)\n", nb);
        printf("                                  -------------------------------------------------\n\n");

        //Calling the function which prints the number of lines actually in memory.

        break;
    case 6 :
        rechercheMM(mesDonnees);

        //Calling the function which print the minimal and the maximal pulse

        break;
    case 7 :
        printf("                                  -------------------------------------------------\n");
        printf("                                                       Au revoir\n");
        printf("                                  -------------------------------------------------\n\n");
        exit(0);

        //Quit the program

        break;
    default :
        printf("                                  -------------------------------------------------\n");
        printf("                                       Desole cette fonctionnalite n'existe pas\n");
        printf("                                  -------------------------------------------------\n\n");


    }

}
