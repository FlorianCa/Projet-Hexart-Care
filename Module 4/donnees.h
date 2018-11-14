#ifndef DONNEE_H_INCLUDE
#define DONNEE_H_INCLUDE
#include <stdio.h>
#include <stdlib.h>

typedef struct Donnees
{
    char poul;
    char temps;
    struct Donnees *suivant;
    struct Donnees *precedent;

}Donnees;

typedef struct
{
    Donnees *debut;
    Donnees *fin;

}ListeDonnees;


void lectureFichier(ListeDonnees *mesDonnees);
ListeDonnees *initialisation();
void insertion(ListeDonnees *mesDonnees, int poul, int temps);







#endif
