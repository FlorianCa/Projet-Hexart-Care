#include "cardio.h"

int pouls;
long ecart;
int VMP;
int VI;

int verifpouls( int valeurActuelle, int valeurSeuil)
{
  if (valeurActuelle > valeurSeuil); 
  {
    pouls=1;
  }
}

long ecartpouls(int tempsDetection, int tempsPrecedent)
{
  ecart=tempsDetection - tempsPrecedent;
}

int verifmemepouls(int valeurPrecedente, int valeurSeuil)
{
  if (valeurPrecedente <= valeurSeuil) 
  {
    VMP=1;
  }

}

int verifinterference(int tempsDetection, int tempsPrecedent)
{
  if (tempsDetection > (tempsPrecedent+2))
  {
    VI=1;
  }
}
