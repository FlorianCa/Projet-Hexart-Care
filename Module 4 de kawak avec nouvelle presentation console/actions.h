#ifndef ACTION

#define ACTION
#include "donnees.h"
#include <stdio.h>
#include <stdlib.h>

//Prototype of the printing function.

void afficherListe(ListeDonnees *lDonnees, int choixOrdre);
void triBulle(ListeDonnees *lDonnees, int choixTri);


//Prototype of the research function.

int recherche(ListeDonnees *lDonnees, int valTemps);
int parcourliste(ListeDonnees *lDonnees);
int moyenne(ListeDonnees *mDonnees);
void rechercheMM(ListeDonnees *lDonnees);

#endif
