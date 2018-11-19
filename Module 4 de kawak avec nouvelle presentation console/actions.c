#include "donnees.h"


//Function which gonna browse the list and prints every data.

void afficherListe(ListeDonnees *lDonnees, int choixOrdre)
{
    if (lDonnees == NULL)
    {

        //Quit the program if the list is empty.

        exit(EXIT_FAILURE);
    }

    if(choixOrdre == 2)
    {

        //Define a pointer on structure equal to the start of the list

        Donnees *actuel = lDonnees->debut;

        //While this pointer isn't NULL, the list browsing continue.

        while(actuel != NULL)
        {

            //Print the pulse and the time in the actual structure.

            printf("                                        pouls -> %i temps -> %i \n", actuel->pouls, actuel->temps);

            //Path to the other structure of the list.

            actuel = actuel->suivant;
        }
        printf("                                        fin \n");
    }
    else
    {
        Donnees *actuel = lDonnees->fin;

        //While this pointer isn't NULL, the list browsing continue.

        while(actuel != NULL)
        {

            //Print the pulse and the time in the actual structure.

            printf("                                        pouls -> %i temps -> %i \n", actuel->pouls, actuel->temps);

            //Path to the other structure of the list.

            actuel = actuel->precedent;
        }
        printf("                                        fin \n");
    }

}

//Sorting algorithm. We use the Bubble sorting.

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

//Our research algorithm

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

        //Quit the program if the list is empty.

        exit(EXIT_FAILURE);
    }

    //Define a pointer of structure which is equal to the start of the list.

    Donnees *actuel = lDonnees->debut;

    //While this pointer isn't NULL, the list browsing continue.

    while(actuel != NULL)
    {
        compt++;

        //Path to the other structure of the list.

        actuel = actuel->suivant;
    }
    return compt;
}

//This function find the average value.

int moyenne(ListeDonnees *lDonnees)
{
    printf("              ----------------------------------------------------------------------------------------\n");
    printf("                                      Voici la liste complete des temps releve\n");
    printf("              ----------------------------------------------------------------------------------------\n");
    int mint, maxt, numerateur = 0, denominateur = 0, resultat;
    Donnees *structMin, *structMax;

    //Define a pointer on structure which is equal to the start of the list.

    Donnees *actuel = lDonnees->debut;

    //While this pointer isn't NULL, the list browsing continue.

    while(actuel != NULL)

    {
        printf("                                                temps :%i\n", actuel->temps);

        //Path to the other structure of the list.

        actuel = actuel->suivant;
    }

    //Asks the user what minimal and maximal he wants.

    printf("              ----------------------------------------------------------------------------------------\n");
    printf("                                 Veuillez choisir vos deux valeurs\n");
    printf("              ----------------------------------------------------------------------------------------\n");
    printf("              Premiere valeur : ");
    scanf("%i", &mint );
    printf("\n");
    printf("              Deuxieme valeur : ");
    scanf("%i", &maxt );

    Donnees *actuel2 = lDonnees->debut;


    while(actuel2 != NULL)
    {
        if(actuel2->temps == mint)
        {
            structMin = actuel2;
        }
        else if(actuel2->temps == maxt)
        {
            structMax = actuel2;
        }

        actuel2 = actuel2->suivant;
    }

    Donnees *actuel3 = structMin;

    for(actuel3; actuel3 != structMax; actuel3 = actuel3->suivant)
    {
        numerateur += actuel3->pouls;
        denominateur ++;
    }
    return resultat = numerateur / denominateur;
}

//This research function search the min pulse, time and the max pulse and time.

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
    printf("                                  -------------------------------------------------\n");
    printf("                             Le pouls min est de %i pour %ims et le max est de %i pour %ims\n", min, tempsMin, max, tempsMax);
    printf("                                  -------------------------------------------------\n");
}
