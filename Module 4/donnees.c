#include "donnees.h"

void lectureFichier(ListeDonnees *mesDonnees)
{
    int poul;
    int temps;

    FILE* f1 = NULL;
    f1 = fopen("Battements.csv", "r");
    if(f1 != NULL)
    {
        do
        {
            poul = fgetc(f1);
            insertion(&mesDonnees, poul, temps);

        }while(poul != EOF);

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

