#ifndef ACTION

#define ACTION
#include "donnees.h"
#include <stdio.h>
#include <stdlib.h>

void afficherListe(ListeDonnees *lDonnees, int choixOrdre); //prototype de la fonction d'affichage
void triBulle(ListeDonnees *lDonnees, int choixTri);


int recherche(ListeDonnees *lDonnees, int valTemps); // prototype de la fonction de recherche
int parcourliste(ListeDonnees *lDonnees);
int moyenne(ListeDonnees *mDonnees);
void rechercheMM(ListeDonnees *lDonnees);

#endif
