#ifndef DONNEE_H_INCLUDE
#define DONNEE_H_INCLUDE
#include <stdio.h>
#include <stdlib.h>

typedef struct Donnees
{
    int pouls;
    int temps;
    struct Donnees *suivant;
    struct Donnees *precedent;

}Donnees; //structure de donnée contenant le pouls et le temps associé, ainsi qu'un pointeur suivant et un pointeur précédent pour formé une liste doublement chainée

typedef struct
{
    Donnees *debut;
    Donnees *fin;

}ListeDonnees; //structure de la liste doublement chainée, avec deux pointeur de type Donnees, pointant vers la première et la dernière donnée


void lectureFichier(ListeDonnees *MesDonnees); //prototype de la fonction de lecture
ListeDonnees *initialisation(); //prototype de la fonction d'initialisation
void insertion(ListeDonnees *MesDonnees, int pouls, int temps); //prototype de la fonction d'insertion

#endif
