void Mode_bCoeur()
{

  //If the signal is lower than the step value, the LED will blink.
  
  if(Signal < ValeurSeuil) 
    {
      
      //the "for" loope that will make blink all the LEDs.
      
      for (i=0; i<10; i++)
        {
            digitalWrite(TabPinLed[i],HIGH);
        }
    }

    //If the signal is upper than the step value, the LED will turns off 
    
    else 
    {
        for (i=0; i<10; i++)
        {
            digitalWrite(TabPinLed[i],LOW);
        }
    }
}
