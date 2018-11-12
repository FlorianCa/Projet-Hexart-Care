#include "cardio.h"

int valeurPrecedente = 0;
long tempsPrecedent = 0;

void setup()
{
  Serial .begin(9600);
}

void loop()
{
  int poul;
  int valeurActuelle = analogRead(0);

  poul = calculPoul(valeurActuelle, valeurPrecedente, tempsPrecedent);
  
  Serial.println(poul);
}
