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
  delay(200);
  digitalWrite(LED_auChoix,LOW);
  delay(200);
}

//The "chenille" mode is a sort of queue, When one DELL goes lit, the former DELL goes off. 

void Mode_chenille()
{
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed[i],HIGH);
      delay(100);
    }
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed[i],LOW);
      delay(100);
    }
}

void Mode_fade()
{
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed[i],HIGH);
    }
    delay(500);
    for (i=0; i<10; i++)
    {
      digitalWrite(TabPinLed[i],LOW);
      delay(500);
    }
}
