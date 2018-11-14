#include "donnees.h"    //Inclue le fichier données.h
#include "menu.h"       //Inclue le fichier menu.h
#include "action.h"     //Inclue le fichier action.h


void menu(ListeDonnees *mesDonnees)
{

    int choix;

    printf("----------------------------------------BIENVENUE----------------------------------------\n");
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
    scanf("%d", &choix);



    switch(choix)
    {
    case 1 :

        afficherListe(mesDonnees); //Appel fonction Afficher les donnees dans l'ordre du fichier .csv

        break;
    case 2 :
        //Appel fonction Afficher les donnees en ordre croissant/decroissant
        break;
    case 3 :
        //Appel fonction Rechercher et afficher les donnees pour un temps particulier
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
