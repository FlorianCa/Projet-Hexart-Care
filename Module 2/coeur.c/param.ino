#include "param.h"

//In this file, we can see two instructions "HIGH" and "LOW". It's for the DELLs, if it's "HIGH", the DELL will be lit and so if it's "LOW", The DELL won't be lit.

//With this function, all the DELLs will be "HIGH" in the same time and "LOW".

//The "digitalWrite" instruction allows the DELLs to be Lit up or trun off.


void Mode_bCoeur()
{
    digitalWrite(LED_1,HIGH);
    digitalWrite(LED_2,HIGH);
    digitalWrite(LED_3,HIGH);
    digitalWrite(LED_4,HIGH);
    digitalWrite(LED_5,HIGH);
    digitalWrite(LED_6,HIGH);
    digitalWrite(LED_7,HIGH);
    digitalWrite(LED_8,HIGH);
    digitalWrite(LED_9,HIGH);
    digitalWrite(LED_10,HIGH);

//We use this delay before we get the IR sensor, with this delay we've got approximately 70 heartbeats by minute.
   
        delay(428); 

    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,LOW);
    digitalWrite(LED_5,LOW);
    digitalWrite(LED_6,LOW);
    digitalWrite(LED_7,LOW);
    digitalWrite(LED_8,LOW);
    digitalWrite(LED_9,LOW);
    digitalWrite(LED_10,LOW);
       delay(428);
}


//With the "unSurDeux" mode, the Arduino will lit just the half of the DELLs at every heartbeat.

void Mode_unSurDeux()
{
    digitalWrite(LED_1,HIGH);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,HIGH);
    digitalWrite(LED_4,LOW);
    digitalWrite(LED_5,HIGH);
    digitalWrite(LED_6,LOW);
    digitalWrite(LED_7,HIGH);
    digitalWrite(LED_8,LOW);
    digitalWrite(LED_9,HIGH);
    digitalWrite(LED_10,LOW);
        delay(857);
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,HIGH);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,HIGH);
    digitalWrite(LED_5,LOW);
    digitalWrite(LED_6,HIGH);
    digitalWrite(LED_7,LOW);
    digitalWrite(LED_8,HIGH);
    digitalWrite(LED_9,LOW);
    digitalWrite(LED_10,HIGH);
        delay(857);
}


//With the "unSurTrois" mode, the Arduino will lit just one of three DELLs at every heartbeat.


void Mode_unSurTrois()
{
    digitalWrite(LED_1,HIGH);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,HIGH);
    digitalWrite(LED_5,LOW);
    digitalWrite(LED_6,LOW);
    digitalWrite(LED_7,HIGH);
    digitalWrite(LED_8,LOW);
    digitalWrite(LED_9,LOW);
    digitalWrite(LED_10,HIGH);
        delay(428);
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,HIGH);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,LOW);
    digitalWrite(LED_5,HIGH);
    digitalWrite(LED_6,LOW);
    digitalWrite(LED_7,LOW);
    digitalWrite(LED_8,HIGH);
    digitalWrite(LED_9,LOW);
    digitalWrite(LED_10,LOW);
        delay(428);
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,HIGH);
    digitalWrite(LED_4,LOW);
    digitalWrite(LED_5,LOW);
    digitalWrite(LED_6,HIGH);
    digitalWrite(LED_7,LOW);
    digitalWrite(LED_8,LOW);
    digitalWrite(LED_9,HIGH);
    digitalWrite(LED_10,LOW);
        delay(428);
}

//The "auChoix" mode, just the choosen DELL will be lit and no other.

 void Mode_auChoix()
{
  digitalWrite(LED_auChoix,HIGH);
  delay(200);
  digitalWrite(LED_auChoix,LOW);
  delay(200);
}

//The "chenille" mode is a sort of queue, When one DELL goes lit, the former DELL goes off. 

void Mode_chenille()
{
    digitalWrite(LED_1,HIGH);
        delay(200);
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,HIGH);
        delay(200);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,HIGH);
        delay(200);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,HIGH);
        delay(200);
    digitalWrite(LED_4,LOW);
    digitalWrite(LED_5,HIGH);
        delay(200);
    digitalWrite(LED_5,LOW);
    digitalWrite(LED_6,HIGH);
        delay(200);
    digitalWrite(LED_6,LOW);
    digitalWrite(LED_7,HIGH);
        delay(200);
    digitalWrite(LED_7,LOW);
    digitalWrite(LED_8,HIGH);
        delay(200);
    digitalWrite(LED_8,LOW);
    digitalWrite(LED_9,HIGH);
        delay(200);
    digitalWrite(LED_9,LOW);
    digitalWrite(LED_10,HIGH);
        delay(200);
    digitalWrite(LED_10,LOW);
}

void Mode_fade()
{
    digitalWrite(LED_1,HIGH);
    digitalWrite(LED_2,HIGH);
    digitalWrite(LED_3,HIGH);
    digitalWrite(LED_4,HIGH);
    digitalWrite(LED_5,HIGH);
    digitalWrite(LED_6,HIGH);
    digitalWrite(LED_7,HIGH);
    digitalWrite(LED_8,HIGH);
    digitalWrite(LED_9,HIGH);
    digitalWrite(LED_10,HIGH);
      delay(700);
    digitalWrite(LED_1,LOW);
      delay(700);
    digitalWrite(LED_2,LOW);
      delay(700);
    digitalWrite(LED_3,LOW);
      delay(700);
    digitalWrite(LED_4,LOW);
      delay(700);
    digitalWrite(LED_5,LOW);
      delay(700);
    digitalWrite(LED_6,LOW);
      delay(700);
    digitalWrite(LED_7,LOW);
      delay(700);
    digitalWrite(LED_8,LOW);
      delay(700);
    digitalWrite(LED_9,LOW);
      delay(700);
    digitalWrite(LED_10,LOW);
      delay(700);
}
