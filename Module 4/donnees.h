#ifndef DONNEE_H_INCLUDE
#define DONNEE_H_INCLUDE

typedef struct
{
    int poul;
    int temps;
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
