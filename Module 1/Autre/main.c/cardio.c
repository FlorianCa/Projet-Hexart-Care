#include "cardio.h"

int calculPoul(int valeurActuelle, int valeurPrecedente, int tempsPrecedent)
{
  int valeurAct=valeurActuelle;
  int seuil = 650;
  long tempsDetection;

  if(valeurAct>seuil)
  {
    if(valeurPrecedente<=seuil)
    {
      tempsDetection = millis();
      if(tempsDetection>(tempsPrecedent+200))
      {
        return ((1000.0 * 60.0)/(tempsDetection - tempsPrecedent));
        tempsPrecedent = tempsDetection;
      }
    }
  }
  valeurPrecedente = valeurAct;
}
