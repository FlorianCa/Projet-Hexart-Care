#include "donnees.h"

void lectureFichier(ListeDonnees *lDonnees) //va lire le fichier
{
    int pouls; //d�claration de pouls
    int temps; //d�claration de temps

    FILE* f1 = NULL; //d�claration du fichier comme NULL
    f1 = fopen("D:/Florian/Projet-Hexart-Care/Module 3/ConvertisseurSerialCSV/Battements.csv", "r"); //ouverture du fichier, chemin a modifier selon ordi
    if(f1 != NULL) //pour v�rifier que le fichier a bien �t� ouvert
    {
        while(fscanf(f1, "%i ; %i", &pouls, &temps) != EOF) // tant que le fscanf n'est pas arriv� a la fin du fichier, les valeurs luent avant et apr�s le ; sont rentr�es dans les variables
        {
            insertion(lDonnees, pouls, temps); //appel insertion afin d'entr�e ces valeurs dans la liste
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
    Donnees *donnees = malloc(sizeof(*donnees)); //allocation dynamique pour la premi�re donn�e qui initialise la liste

    if (lDonnees == NULL || donnees == NULL)
    {
        exit(EXIT_FAILURE); //si l'allocation dynamique a �chou�, on quitte le programme
    }

    donnees->pouls = 0; //on attribue 0 au pouls de la donn�e
    donnees->temps = 0; //on attribue 0 au temps de la donn�e
    donnees->suivant = NULL; //le pointeur suivant ne pointe sur rien car il n'y a pas d'autre valeur dans la liste
    donnees->precedent = NULL; //le pointeur suivant ne pointe sur rien car il n'y a pas d'autre valeur dans la liste
    lDonnees->debut = donnees; //le d�but de la liste pointe vers l'unique donn�e
    lDonnees->fin = donnees; //la fin de la liste pointe vers l'unique donn�e

    return lDonnees; //on renvoie la liste cr�� et initialis�
}

void insertion(ListeDonnees *lDonnees, int pouls, int temps) //permet d'ins�rer un nouvel �l�ment en fin de liste
{
    Donnees *nouveau = malloc(sizeof(*nouveau)); //allocation dynamique pour le nouvel �l�ment

    if (lDonnees == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE); //si l'allocation dynamique a �chou�, on quitte le programme
    }

    nouveau->pouls = pouls; //attribue le pouls r�cup�r� au champ pouls de nouveau
    nouveau->temps = temps; //attribue le temps r�cup�r� au champ temps de temps

    lDonnees->fin->suivant = nouveau; //Fait pointer le champ suivant du dernier �l�ment de la liste sur nouveau au lieu de NULL

    nouveau->suivant = NULL; //fait pointer le champ suivant de nouveau sur NULL
    nouveau->precedent = lDonnees->fin; //fait pointer le champ pr�c�dent de nouveau sur la fin de la liste

    lDonnees->fin = nouveau; //d�fini la fin de la liste sur nouveau
}


