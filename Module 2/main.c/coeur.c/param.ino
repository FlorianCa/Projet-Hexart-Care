//In this file, we can see two instructions "HIGH" and "LOW". It's for the DELLs, if it's "HIGH", the DELL will be lit and so if it's "LOW", The DELL won't be lit.

//With this function, all the DELLs will be "HIGH" in the same time and "LOW".

//The "digitalWrite" instruction allows the DELLs to be Lit up or trun off.


void Mode_bCoeur()
{
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed[i],HIGH);
    }
//We use this delay before we get the IR sensor, with this delay we've got approximately 70 heartbeats by minute.
        delay(428); 
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed[i],LOW);
    }
       delay(428);
}


//With the "unSurDeux" mode, the Arduino will lit just the half of the DELLs at every heartbeat.

void Mode_unSurDeux()
{
    for (i=0; i<5; i++)
    {
      digitalWrite(TabPinLed_2[i],HIGH);
      digitalWrite(TabPinLed_3[i],LOW);
    }
        delay(857);
    for (i=0; i<5; i++)
    {
      digitalWrite(TabPinLed_2[i],LOW);
      digitalWrite(TabPinLed_3[i],HIGH);
    }
        delay(857);
}

//With the "unSurTrois" mode, the Arduino will lit just one of three DELLs at every heartbeat.

void Mode_unSurTrois()
{
    for (i=0; i<4; i++)
    {
      digitalWrite(TabPinLed_4[i],HIGH);
      digitalWrite(TabPinLed_5[i],LOW);
      digitalWrite(TabPinLed_6[i],LOW);
    }
        delay(857);
    for (i=0; i<4; i++)
    {
      digitalWrite(TabPinLed_4[i],LOW);
      digitalWrite(TabPinLed_5[i],HIGH);
      digitalWrite(TabPinLed_6[i],LOW);
    }
        delay(857);
    for (i=0; i<4; i++)
    {
      digitalWrite(TabPinLed_4[i],LOW);
      digitalWrite(TabPinLed_5[i],LOW);
      digitalWrite(TabPinLed_6[i],HIGH);
    }
        delay(857);
}

//The "auChoix" mode, just the choosen DELL will be lit and no other.

 void Mode_auChoix()
{
  digitalWrite(LED_auChoix,HIGH);
  delay(428);
  digitalWrite(LED_auChoix,LOW);
  delay(428);
}

//The "chenillard" mode, it's the opposite of the "fade" mode. 

void Mode_chenillard()
{
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed[i],HIGH);
      delay(85);
    }
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed[i],LOW);
      delay(85);
    }
}

//It's the "fade" mode, at the start, all the LEDs are lit and they turn off one after the other.

void Mode_fade()
{
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed[i],HIGH);
    }
    delay(85);
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed[i],LOW);
    delay(85);
    }
}

//It's the "moitié" mode, it's like a worm, half of LEDs are lit and whene the last LED goes off, a new LED goes lit.

void Mode_moitie()
{
      for (i=0; i<5; i++)
    {
      digitalWrite(TabPinLed_7[i],HIGH);
      digitalWrite(TabPinLed_8[i],LOW);
      delay(857);
    }
           for (i=0; i<5; i++)
    {
      digitalWrite(TabPinLed_7[i],LOW);
      digitalWrite(TabPinLed_8[i],HIGH);
      delay(857);
    }
}

//It's the "chenille" mode, it's a sort of queue, when a LED goes lit, the former LED goes off.

void Mode_chenille()
{
    digitalWrite(LED_1,HIGH);
        delay(85);
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,HIGH);
        delay(85);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,HIGH);
        delay(85);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,HIGH);
        delay(85);
    digitalWrite(LED_4,LOW);
    digitalWrite(LED_5,HIGH);
        delay(85);
    digitalWrite(LED_5,LOW);
    digitalWrite(LED_6,HIGH);
        delay(85);
    digitalWrite(LED_6,LOW);
    digitalWrite(LED_7,HIGH);
        delay(85);
    digitalWrite(LED_7,LOW);
    digitalWrite(LED_8,HIGH);
        delay(85);
    digitalWrite(LED_8,LOW);
    digitalWrite(LED_9,HIGH);
        delay(85);
    digitalWrite(LED_9,LOW);
    digitalWrite(LED_10,HIGH);
        delay(85);
    digitalWrite(LED_10,LOW);
}

//It's the "allerRetour" mode, it's a mix between the "fade" and the "chenillard" mode

void Mode_allerRetour()
{
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed[i],HIGH);   
      delay(85);
    }
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed_1[i],LOW);
      delay(85);
    }
}
