#include "donnees.h"

void lectureFichier(ListeDonnees *lDonnees) //va lire le fichier
{
    int pouls; //déclaration de pouls
    int temps; //déclaration de temps

    FILE* f1 = NULL; //déclaration du fichier comme NULL
    f1 = fopen("D:/Florian/Projet-Hexart-Care/Module 3/ConvertisseurSerialCSV/Battements.csv", "r"); //ouverture du fichier, chemin a modifier selon ordi
    if(f1 != NULL) //pour vérifier que le fichier a bien été ouvert
    {
        while(fscanf(f1, "%i ; %i", &pouls, &temps) != EOF) // tant que le fscanf n'est pas arrivé a la fin du fichier, les valeurs luent avant et après le ; sont rentrées dans les variables
        {
            insertion(lDonnees, pouls, temps); //appel insertion afin d'entrée ces valeurs dans la liste
        }
        fclose(f1); //fermeture du fichier
    }
    else
    {
    printf("Fichier vide \n"); //s'affiche si le fichier n'est pas corrrectment ouvert ou qu'il est vide
    }
}

ListeDonnees *initialisation() //initialise la liste
{
    ListeDonnees *lDonnees = malloc(sizeof(*lDonnees)); //allocation dynamique pour la liste
    Donnees *donnees = malloc(sizeof(*donnees)); //allocation dynamique pour la première donnée qui initialise la liste

    if (lDonnees == NULL || donnees == NULL)
    {
        exit(EXIT_FAILURE); //si l'allocation dynamique a échoué, on quitte le programme
    }

    donnees->pouls = 0; //on attribue 0 au pouls de la donnée
    donnees->temps = 0; //on attribue 0 au temps de la donnée
    donnees->suivant = NULL; //le pointeur suivant ne pointe sur rien car il n'y a pas d'autre valeur dans la liste
    donnees->precedent = NULL; //le pointeur suivant ne pointe sur rien car il n'y a pas d'autre valeur dans la liste
    lDonnees->debut = donnees; //le début de la liste pointe vers l'unique donnée
    lDonnees->fin = donnees; //la fin de la liste pointe vers l'unique donnée

    return lDonnees; //on renvoie la liste créé et initialisé
}

void insertion(ListeDonnees *lDonnees, int pouls, int temps) //permet d'insérer un nouvel élément en fin de liste
{
    Donnees *nouveau = malloc(sizeof(*nouveau)); //allocation dynamique pour le nouvel élément

    if (lDonnees == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE); //si l'allocation dynamique a échoué, on quitte le programme
    }

    nouveau->pouls = pouls; //attribue le pouls récupéré au champ pouls de nouveau
    nouveau->temps = temps; //attribue le temps récupéré au champ temps de temps

    lDonnees->fin->suivant = nouveau; //Fait pointer le champ suivant du dernier élément de la liste sur nouveau au lieu de NULL

    nouveau->suivant = NULL; //fait pointer le champ suivant de nouveau sur NULL
    nouveau->precedent = lDonnees->fin; //fait pointer le champ précédent de nouveau sur la fin de la liste

    lDonnees->fin = nouveau; //défini la fin de la liste sur nouveau
}


