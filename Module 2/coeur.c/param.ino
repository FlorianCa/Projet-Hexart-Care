#include "param.h"

void Mode_BCoeur()
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
        delay(857);
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
       delay(857);
}

void Mode_1sur2()
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
    digitalWrite(LED_1,LOW);
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

void Mode_1sur3()
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
        delay(857);
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,HIGH);
    digitalWrite(LED_3,HIGH);
    digitalWrite(LED_4,LOW);
    digitalWrite(LED_5,HIGH);
    digitalWrite(LED_6,HIGH);
    digitalWrite(LED_7,LOW);
    digitalWrite(LED_8,HIGH);
    digitalWrite(LED_9,HIGH);
    digitalWrite(LED_10,LOW);
        delay(857);
}

 void Mode_auchoix()
{
  digitalWrite(LED_auchoix,HIGH);
}

void Mode_Chenille()
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



