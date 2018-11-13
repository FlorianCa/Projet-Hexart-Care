#include "param.h"
//#include "coeur.h"

#define LED_1 2
#define LED_2 3
#define LED_3 4
#define LED_4 5
#define LED_5 6
#define LED_6 7
#define LED_7 8
#define LED_8 9
#define LED_9 10
#define LED_10 11
#define LED_MODE 1
#define LED_auchoix LED_5


void setup() {
  Serial.begin(9600);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(LED_6, OUTPUT);
  pinMode(LED_7, OUTPUT);
  pinMode(LED_8, OUTPUT);
  pinMode(LED_9, OUTPUT);
  pinMode(LED_10, OUTPUT);

}

void loop() {
   switch(LED_MODE){
      case 1 :
        Mode_BCoeur(); //kawak
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
      default: 
        while(1);}
}
