#include "donnees.h"    //Inclue le fichier données.h
#include "menu.h"       //Inclue le fichier menu.h
   //Inclue le fichier action.h


void menu(ListeDonnees *mesDonnees)
{

    int choix;
    int choixTri = 0;
    int choixOrdre = 0;
    int nb;
    int valTemps;
    int valPouls;
    int moy;

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

    switch(choix)
    {
    case 1 :

        printf("              ----------------------------------------------------------------------------------------\n\n");
        printf("              Veuillez selectionner votre type d'affichage : \n");
        printf("              Croissant   --> 1\n");
        printf("              Decroissant --> 2\n\n");
        printf("                                  -------------------------------------------------\n\n");
        printf("              Vous avez choisi ");
        scanf("%i", &choixOrdre);
        printf("\n");
        printf("              ----------------------------------------------------------------------------------------\n\n");
        afficherListe(mesDonnees, choixOrdre); //Appel fonction Afficher les donnees dans l'ordre du fichier .csv

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

        triBulle(mesDonnees, choixTri);
        afficherListe(mesDonnees, choixOrdre);

        //Appel fonction Afficher les donnees en ordre croissant/decroissant
        break;
    case 3 :

        printf("              ----------------------------------------------------------------------------------------\n");
        printf("                                      Voici la liste complete des temps releve\n");
        printf("              ----------------------------------------------------------------------------------------\n\n");
        Donnees *actuel = mesDonnees->debut; //défini un pointeur sur structure qui est égal au début de la liste

        while(actuel != NULL) //tant que ce pointeur n'est pas NULL, le parcour de la liste continu
        {
            printf("                                                temps : %i\n", actuel->temps);
            actuel = actuel->suivant; //on passe a la structure suivant de la liste


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
        //Appel fonction Afficher la moyenne du pouls dans une plage de temps donnee
        break;
    case 5 :
        nb = parcourliste(mesDonnees);
        printf("                                  -------------------------------------------------\n");
        printf("                                            Il y a actuellement %i ligne(s)\n", nb);
        printf("                                  -------------------------------------------------\n\n");
        //Appel fonction Afficher le nombre de lignes de donnees actuellement en memoire
        break;
    case 6 :
        rechercheMM(mesDonnees);
        //Appel fonction Rechercher et afficher les max/min de pouls
        break;
    case 7 :
        printf("                                  -------------------------------------------------\n");
        printf("                                                       Au revoir\n");
        printf("                                  -------------------------------------------------\n");
        exit(0);
        //Quitte le programme
        break;
    }

}
