#include "donnees.h"

//Reading the file.

void lectureFichier(ListeDonnees *lDonnees)
{

    //Initializations of thge pulse and the time.

    int pouls;
    int temps;

    //Declare the file as NULL.

    FILE* f1 = NULL;

    //Opening the "Battements.csv" file.

    f1 = fopen("Battements.csv", "r");

    //Verify that the file is open.

    if(f1 != NULL)
    {

        //While the fscanf isn't at the end of the file, the values are put in the inconstant values.

        while(fscanf(f1, "%i ; %i", &pouls, &temps) != EOF)
        {

            //Insertion call to puts those values in the list

            insertion(lDonnees, pouls, temps);
        }

        //Closing the file.

        fclose(f1);
    }
    else
    {

        //prints only if the file is empty.

    printf("Fichier vide \n");
    }
}

//Initialization of the list.

ListeDonnees *initialisation()
{

    //Dynamic allocation of memory for the list.

    ListeDonnees *lDonnees = malloc(sizeof(*lDonnees));

    //Dynamic allocation of memory for the first list's value.

    Donnees *donnees = malloc(sizeof(*donnees));

    if (lDonnees == NULL || donnees == NULL)
    {

        //Quitting the program if the malloc fail.

        exit(EXIT_FAILURE);
    }

    //We associate the pulse and the time values with 0.

    donnees->pouls = 0;
    donnees->temps = 0;

    //The pointers points on nothing because the list hasn't got other values.

    donnees->suivant = NULL;
    donnees->precedent = NULL;

    //The start and the end of the list point to the unique data.

    lDonnees->debut = donnees;
    lDonnees->fin = donnees;

    //We return the created list.

    return lDonnees;
}

//Enable to introduce a new element at the end of the list.

void insertion(ListeDonnees *lDonnees, int pouls, int temps)
{

    //Dynamic allocation for the new element.

    Donnees *nouveau = malloc(sizeof(*nouveau));

    if (lDonnees == NULL || nouveau == NULL)
    {

        //Quitting the program if the malloc fail.

        exit(EXIT_FAILURE);
    }

    //Attribute the collected pulse/time values to the new fields.

    nouveau->pouls = pouls;
    nouveau->temps = temps;

    //Make point the next field of the last list element to the new one instead of NULL.

    lDonnees->fin->suivant = nouveau;

    //Make point the "nouveau" next field on NULL

    nouveau->suivant = NULL;

    //Make point the previous field of "nouveau"on the end of the list.
    nouveau->precedent = lDonnees->fin;

    //Define the end of the list on new.

    lDonnees->fin = nouveau;

