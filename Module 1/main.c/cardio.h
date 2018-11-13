#ifndef CARDIO
#define CARDIO
int verifpouls( int valeurActuelle, int valeurSeuil);
long ecartpouls(int tempsDetection, int tempsPrecedent);
int verifmemepouls(int valeurPrecedente, int valeurSeuil);
int verifinterference(int tempsDetection, int tempsPrecedent);
#endif
