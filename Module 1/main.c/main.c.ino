#include "cardio.c"
#include "cardio.h"

int valeurSeuil = 650;
int valeurPrecedente;
int valeurActuelle;
int tempsDetection;
int tempsPrecedent;
int premierpouls=1;

void setup() 
{
  Serial.begin(9600);
  Serial.println("Veuillez patienter");
}


void loop() 
{
  valeurActuelle = analogRead(0);
  verifpouls(valeurActuelle, valeurSeuil);
  
  if (pouls==1)
  {
    verifmemepouls(valeurPrecedente, valeurSeuil);
    if (VMP==1)
    {  
      tempsDetection = millis();
      if (premierpouls==0)
      {
        verifinterference(tempsDetection, tempsPrecedent);
        if (VI==1)
        {
          ecartpouls(tempsDetection, tempsPrecedent);
          Serial.println( (1000.0 * 60.0) / (ecart),0);
        }
      }
      else
      {
        premierpouls=0;
      }
    tempsPrecedent = tempsDetection;
    }
  }
  valeurPrecedente = valeurActuelle;
}
