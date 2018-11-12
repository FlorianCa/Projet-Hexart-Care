#include "param.h"
#include "cardio.h"
int LED_1 = 2;
int LED_2 = 3;
int LED_3 = 4; 
int LED_4 = 5; 
int LED_5 = 6;
int LED_6 = 7;
int LED_7 = 8;
int LED_8 = 9;
int LED_9 = 10;
int LED_MODE = 1;
int LED_auchoix = 1 ;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(LED_6, OUTPUT);
  pinMode(LED_7, OUTPUT);
  pinMode(LED_8, OUTPUT);
  pinMode(LED_9, OUTPUT);

}

void loop() {
   switch(LED_MODE)
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
        Mode_chenille;
        break;
      case 6 :
        Mode_aleatoire;
        break;
      case 7 :
        break;
        
}
