#include "action.h"
#include "donnees.h"

void afficherListe(ListeDonnees *mesDonnees)
{
    if (mesDonnees == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Donnees *actuel = mesDonnees->debut;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->poul);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}

/* ListeDonnees *division(ListeDonnees *mesDonnees)
{

    Donnees *pos = mesDonnees->debut;
    int pivot = mesDonnees->debut->poul;

    for(Donnees *i = mesDonnees->debut; i->suivant != mesDonnees->fin ; *i = *i->suivant)
    {
        if(i->poul < pivot)
        {
            pos->poul=i->poul;
            pos=pos->suivant;
            i->poul=pos->poul;
            pos->poul=pivot;
        }
    }
}

void triRapide(ListeDonnees *mesDonnees)
{

}
*/


