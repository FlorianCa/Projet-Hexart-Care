#include "action.h"
#include "donnees.h"


void afficherListe(ListeDonnees *lDonnees, int choixOrdre) //fonction qui va parcourir la liste est afficher chaque donnée
{
    if (lDonnees == NULL)
    {
        exit(EXIT_FAILURE); //quitte le programme si la liste est vide
    }


    if(choixOrdre == 2)
    {
        Donnees *actuel = lDonnees->debut; //défini un pointeur sur structure qui est égal au début de la liste
        while(actuel != NULL) //tant que ce pointeur n'est pas NULL, le parcour de la liste continu
        {
            printf("pouls -> %i temps -> %i \n", actuel->pouls, actuel->temps); //on afficher le pouls et le temps dans la structure actuelle
            actuel = actuel->suivant; //on passe a la structure suivant de la liste
        }
        printf("fin \n"); //pour dire qu'on a fini l'affichage
    }
    else
    {
        Donnees *actuel = lDonnees->fin;
        while(actuel != NULL) //tant que ce pointeur n'est pas NULL, le parcour de la liste continu
        {
            printf("pouls -> %i temps -> %i \n", actuel->pouls, actuel->temps); //on afficher le pouls et le temps dans la structure actuelle
            actuel = actuel->precedent; //on passe a la structure suivant de la liste
        }
        printf("fin \n"); //pour dire qu'on a fini l'affichage
    }

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

void triBulle(ListeDonnees *lDonnees, int choixTri)
{
    if(choixTri == 1)
    {

        Donnees *tempo = malloc(sizeof(*tempo));
        Donnees *actuel2 = lDonnees->fin;

        while(actuel2 != NULL && actuel2 != NULL)
        {
            Donnees *actuel = lDonnees->debut;
            while(actuel != NULL && actuel->suivant != NULL)
            {
                if(actuel->pouls < actuel->suivant->pouls)
                {
                    tempo->pouls = actuel->pouls;
                    actuel->pouls = actuel->suivant->pouls;
                    actuel->suivant->pouls = tempo->pouls;
                }
                actuel = actuel->suivant;
            }
            actuel2 = actuel2->precedent;
        }
    }
    else
    {
        Donnees *tempo = malloc(sizeof(*tempo));
        Donnees *actuel2 = lDonnees->fin;

        while(actuel2 != NULL && actuel2 != NULL)
        {
            Donnees *actuel = lDonnees->debut;
            while(actuel != NULL && actuel->suivant != NULL)
            {
                if(actuel->temps < actuel->suivant->temps)
                {
                    tempo->temps = actuel->temps;
                    actuel->temps = actuel->suivant->temps;
                    actuel->suivant->temps = tempo->temps;
                }
                actuel = actuel->suivant;
            }
            actuel2 = actuel2->precedent;
        }
    }
}

int recherche( ListeDonnees *rDonnees)
{
    int valt;

    Donnees *actuel = rDonnees->debut;

    printf("  Indiquez le temps de la prise de votre pouls:  \n");
    scanf("%i",&valt);
    printf(" La valeur de votre pouls est de:                \n");
    while(actuel != NULL)
    {
        if(actuel->temps == valt)
        {
            return actuel->pouls;
        }
        actuel = actuel->suivant;
    }
}



