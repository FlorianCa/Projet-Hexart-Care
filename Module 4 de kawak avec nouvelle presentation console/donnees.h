#ifndef DONNEE
#define DONNEE
#include <stdio.h>
#include <stdlib.h>

typedef struct Donnees
{
    int pouls;
    int temps;
    struct Donnees *suivant;
    struct Donnees *precedent;

}Donnees; //structure de donn�e contenant le pouls et le temps associ�, ainsi qu'un pointeur suivant et un pointeur pr�c�dent pour form� une liste doublement chain�e

typedef struct
{
    Donnees *debut;
    Donnees *fin;

}ListeDonnees; //structure de la liste doublement chain�e, avec deux pointeur de type Donnees, pointant vers la premi�re et la derni�re donn�e


void lectureFichier(ListeDonnees *lDonnees); //prototype de la fonction de lecture
ListeDonnees *initialisation(); //prototype de la fonction d'initialisation
void insertion(ListeDonnees *lDonnees, int pouls, int temps); //prototype de la fonction d'insertion

#endif
