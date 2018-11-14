#include "action.h"
#include "donnees.h"

void afficherListe(ListeDonnees *MesDonnees) //fonction qui va parcourir la liste est afficher chaque donnée
{
    if (MesDonnees == NULL)
    {
        exit(EXIT_FAILURE); //quitte le programme si la liste est vide
    }

    Donnees *actuel = MesDonnees->debut; //défini un pointeur sur structure qui est égal au début de la liste

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
        if(i->poul < i->suivant->poul)
        {
            tempo=i->suivant->poul;
            i->suivant->poul=i->poul;
            i->poul=tempo;
        }
    }
}
*/

