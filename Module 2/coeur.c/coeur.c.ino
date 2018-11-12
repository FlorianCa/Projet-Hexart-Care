#include "param.h"
//#include "coeur.h"
int LED_1 = 2;
int LED_2 = 3;
int LED_3 = 4; 
int LED_4 = 5; 
int LED_5 = 6;
int LED_6 = 7;
int LED_7 = 8;
int LED_8 = 9;
int LED_9 = 10;
int LED_MODE = 3;
int LED_auchoix = 1;


void setup() {
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

}

void loop() {
   switch(LED_MODE){
      case 1 :
        Mode_BCoeur();
        break;
      case 2 :
        Mode_1sur2();
        break;
      case 3 :
        Mode_1sur3(); 
        break;
      case 4 : 
        Mode_auchoix();
        break;
      case 5 : 
        Mode_Chenille();
        break;
/*      case 6 :
        Mode_aleatoire();
        break;*/
      default: 
      while(1);}
}
