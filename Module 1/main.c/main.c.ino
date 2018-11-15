#include "cardio.h"

//  VARIABLES
int CapteurPouls = 0;// Capteur Pouls connecté au Pin0
int Coeur = 13; //  Controle LED Rouge

int TabPinLed[10]={2,3,4,5,6,7,8,9,10,11}; //Création d'un tableau de 10 valeurs où l'on a attribué les différents pin
int i;

double Signal; // Contient les données brutes et elles peuvent aller de 0 à 1023
float ValeurSeuil = 2.5; // Permet de détecter quel battement choisir et lequel ignorer avec un seuil de 2.5 volt


// FONCTION SETUP
void setup() {
   pinMode(Coeur,OUTPUT); // Fait en sorte que la LED clignote au rythme cardiaque
   Serial.begin(9600);    
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);     
}

// FONCTION LOOP
void loop() {
   Signal = analogRead(CapteurPouls);  // Lit la valeur du pouls
                                       // Et attribue la valeur à la variable signal
                                      
   Serial.print(Signal * 5 / 1023); //Affichage du signal converti en Volt
   Serial.print(";"); //Affichage du ";"
   Serial.println(millis()); //Affichage temps depuis lancement du programme

   Mode_bCoeur(); //Appel fonction Mode_BCoeur
}
