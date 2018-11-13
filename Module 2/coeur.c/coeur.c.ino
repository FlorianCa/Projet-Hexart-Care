#include "param.h"

// Initialization of the DELLs'numbers all the "#define" lines associate a DELL to a number. 

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

/*
Initialization of the blinking mode
LED_MODE 1 = bCoeur
LED_MODE 2 = unSurDeux
LED_MODE 3 = unSurTrois
LED_MODE 4 = auchoix
LED_MODE 5 = Chenille
 */

#define LED_MODE 1

// Initialization of the choosen DELL for the "auchoix" mode. 

#define LED_auChoix LED_5

//Those lines define pinmodes of the Arduino as outputs so each pinmode is associate with a DELL

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

//Main loop, the switch is connected with LED_MODE's value so we have cases for all the value we can put into LED_MODE as it was said before.  

void loop() {
   switch(LED_MODE){
      case 1 :
        Mode_bCoeur(); 
        break;
      case 2 :
        Mode_unSurDeux();
        break;
      case 3 :
        Mode_unSurTrois(); 
        break;
      case 4 : 
        Mode_auChoix();
        break;
      case 5 : 
        Mode_chenille();
        break;
      default: 
        while(1);}
}
