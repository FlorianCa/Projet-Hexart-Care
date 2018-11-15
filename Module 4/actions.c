#include "actions.h"
#include "donnees.h"


void afficherListe(ListeDonnees *lDonnees, int choixOrdre) //fonction qui va parcourir la liste est afficher chaque donnée
{
    if (lDonnees == NULL)
    {
        exit(EXIT_FAILURE); //quitte le programme si la liste est vide
    }

    if(choixOrdre == 1)
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

int recherche(ListeDonnees *lDonnees, int valTemps)
{
    Donnees *actuel = lDonnees->debut;

    while(actuel != NULL)
    {
        if(actuel->temps == valTemps)
        {
            return actuel->pouls;
        }

        actuel = actuel->suivant;
    }
}

int parcourliste(ListeDonnees *lDonnees)
{
    int compt = 0;

    if (lDonnees == NULL)
    {
        exit(EXIT_FAILURE); //quitte le programme si la liste est vide
    }

    Donnees *actuel = lDonnees->debut; //défini un pointeur sur structure qui est égal au début de la liste
    while(actuel != NULL) //tant que ce pointeur n'est pas NULL, le parcour de la liste continu
    {
        compt++;
        actuel = actuel->suivant; //on passe a la structure suivant de la liste
    }
    return compt;
}

int moyenne(ListeDonnees *lDonnees)
{
    int mint, maxt, numerateur = 0, denominateur = 0, resultat;
    Donnees *structMin, *structMax;

    Donnees *actuel = lDonnees->debut; //défini un pointeur sur structure qui est égal au début de la liste
    while(actuel != NULL) //tant que ce pointeur n'est pas NULL, le parcour de la liste continu
    {
        printf("temps :%i\n", actuel->temps);
        actuel = actuel->suivant; //on passe a la structure suivant de la liste
    }

    printf("Choisissez vos deux valeurs: \n");

    scanf("%i", &mint );

    scanf("%i", &maxt );

    printf("1\n");

    Donnees *actuel2 = lDonnees->debut;

    printf("2\n");

    while(actuel2 != NULL)
    {
        printf("3\n");
        if(actuel2->temps == mint)
        {
            structMin = actuel2;
            printf("Coucou\n");
        }
        else if(actuel2->temps == maxt)
        {
            structMax = actuel2;
            printf("Salut\n");
        }

        actuel2 = actuel2->suivant;
        printf("6\n");
    }

    printf("7\n");

    Donnees *actuel3 = structMin;

    printf("8\n");

    for(actuel3; actuel3 != structMax; actuel3 = actuel3->suivant)
    {
        numerateur += actuel3->pouls;
        denominateur ++;
        printf("9\n");
    }
    return resultat = numerateur / denominateur;
}

void rechercheMM(ListeDonnees *lDonnees)
{
    int min, max, tempsMin, tempsMax;

    Donnees *actuel = lDonnees->debut->suivant;

    max = actuel->pouls;
    min = actuel->pouls;

    while(actuel != NULL)
    {
        if(actuel->pouls > max)
        {
            max = actuel->pouls;
            tempsMax = actuel->temps;
        }
        else if(actuel->pouls < min)
        {
            min = actuel->pouls;
            tempsMin = actuel->temps;
        }
        actuel = actuel->suivant;
    }
    printf("Le pouls min est %i a %i et le max est %i a %i\n", min, tempsMin, max, tempsMax);
}
