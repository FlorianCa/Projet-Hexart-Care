#include "action.h"
#include "donnees.h"

void afficherListe(ListeDonnees *lDonnees) //fonction qui va parcourir la liste est afficher chaque donn�e
{
    if (lDonnees == NULL)
    {
        exit(EXIT_FAILURE); //quitte le programme si la liste est vide
    }

    Donnees *actuel = lDonnees->debut; //d�fini un pointeur sur structure qui est �gal au d�but de la liste

    while(actuel != NULL) //tant que ce pointeur n'est pas NULL, le parcour de la liste continu
    {
        printf("pouls -> %i temps -> %i \n", actuel->pouls, actuel->temps); //on afficher le pouls et le temps dans la structure actuelle
        actuel = actuel->suivant; //on passe a la structure suivant de la liste
    }
    printf("fin \n"); //pour dire qu'on a fini l'affichage
}

/*ListeDonnees *division(ListeDonnees *mesDonnees)
{

    Donnees pos = mesDonnees->debut;
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

/*void triBulle(ListeDonnees *mesDonnees)
{
    Donnees *i;
    int tempo;

    for(i = mesDonnees->debut; i != mesDonnees->fin; i = i->suivant)
    {
        if(i->pouls < i->suivant->pouls)
        {
            tempo=i->suivant->pouls;
            i->suivant->pouls=i->pouls;
            i->pouls=tempo;
        }
    }
}
*/

