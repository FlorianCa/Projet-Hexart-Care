#ifndef DONNEE
#define DONNEE
#include <stdio.h>
#include <stdlib.h>

//Define the structure "données" which contains the pulse, the time and two pointers.

typedef struct Donnees
{
    int pouls;
    int temps;
    struct Donnees *suivant;
    struct Donnees *precedent;

}Donnees;

//Structure of the twice chained list.

typedef struct
{
    Donnees *debut;
    Donnees *fin;

}ListeDonnees;

//All the prototypes.

void lectureFichier(ListeDonnees *lDonnees);
ListeDonnees *initialisation();
void insertion(ListeDonnees *lDonnees, int pouls, int temps);

#endif
