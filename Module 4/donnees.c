#include "donnees.h"

void lectureFichier(ListeDonnees *mesDonnees)
{
    int poul;
    int temps;

    FILE* f1 = NULL;
    f1 = fopen("D:/Florian/Documents/Projet-Hexart-Care/Module 3/ConvertisseurSerialCSV/Battements.csv", "r");
    if(f1 != NULL)
    {
        int poul, temps;
        while(fscanf(f1, "%i ; %i", &poul, & temps) != EOF)
        {
            insertion(&mesDonnees, poul, temps);
        }


        fclose(f1);
    }
    else
    {
    printf("Fichier vide");
    }

}

ListeDonnees *initialisation()
{
    ListeDonnees *mesDonnees = malloc(sizeof(*mesDonnees));
    Donnees *donnees = malloc(sizeof(*donnees));

    if (mesDonnees == NULL || donnees == NULL)
    {
        exit(EXIT_FAILURE);
    }

    donnees->poul = 0;
    donnees->temps = 0;
    donnees->suivant = NULL;
    donnees->precedent = NULL;
    mesDonnees->debut = donnees;
    mesDonnees->fin = donnees;

    return mesDonnees;
}

void insertion(ListeDonnees *mesDonnees, int poul, int temps)
{
    Donnees *nouveau = malloc(sizeof(*nouveau));
    if (mesDonnees == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->poul = poul;
    nouveau->temps = temps;

    nouveau->suivant = NULL;
    nouveau->precedent = mesDonnees->fin;
    mesDonnees->fin = nouveau;
}

