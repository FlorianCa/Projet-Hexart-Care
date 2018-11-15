#include "donnees.h"    //Inclue le fichier données.h
#include "menu.h"       //Inclue le fichier menu.h
#include "action.h"     //Inclue le fichier action.h


void menu(ListeDonnees *mesDonnees)
{

    int choix;
    int choixTri = 0;
    int choixOrdre = 0;
    int nb;
    int valTemps;
    int valPouls;
    int moy;

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

        printf("Vous les vous afficher par ordre croissant : 1 ou decroissant : 2 ? ");
        scanf("%i", &choixOrdre);
        afficherListe(mesDonnees, choixOrdre); //Appel fonction Afficher les donnees dans l'ordre du fichier .csv

        break;
    case 2 :

        printf("Vous les vous triez par pouls : 1 ou par temps : 2 ? ");
        scanf("%i", &choixTri);
        printf("Vous les vous afficher par ordre croissant : 1 ou decroissant : 2 ? ");
        scanf("%i", &choixOrdre);

        triBulle(mesDonnees, choixTri);
        afficherListe(mesDonnees, choixOrdre);

        //Appel fonction Afficher les donnees en ordre croissant/decroissant
        break;
    case 3 :

        printf("Voici les valeurs de temps releve :\n");
        Donnees *actuel = mesDonnees->debut; //défini un pointeur sur structure qui est égal au début de la liste

        while(actuel != NULL) //tant que ce pointeur n'est pas NULL, le parcour de la liste continu
        {
            printf("temps : %i\n", actuel->temps);
            actuel = actuel->suivant; //on passe a la structure suivant de la liste

        }

        printf("Indiquez le temps de la prise de votre pouls: \n");
        scanf("%i", &valTemps);

        valPouls = recherche(mesDonnees, valTemps);

        printf("La valeur de votre pouls est de:%i\n", valPouls);

        break;
    case 4 :
        moy = moyenne(mesDonnees);
        printf("La moyenne des pouls est de : %i\n", moy);
        //Appel fonction Afficher la moyenne du pouls dans une plage de temps donnee
        break;
    case 5 :
        nb = parcourliste(mesDonnees);
        printf("Il y a actuellement %i ligne(s)\n", nb);
        //Appel fonction Afficher le nombre de lignes de donnees actuellement en memoire
        break;
    case 6 :
        rechercheMM(mesDonnees);
        //Appel fonction Rechercher et afficher les max/min de pouls
        break;
    case 7 :
        //Appel fonction quitter
        break;
    }

}
