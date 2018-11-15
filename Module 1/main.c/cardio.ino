

void Mode_bCoeur()
{
    if(Signal < ValeurSeuil) //Si le signal est inférieur à la valeur seuil alors la led s'allume
    {
        for (i=0; i<10; i++)
        {
            digitalWrite(TabPinLed[i],HIGH);
        }
    }
    else // Sinon si le signal est supérieur à la valeur seuil alors la led s'éteint
    {
        for (i=0; i<10; i++)
        {
            digitalWrite(TabPinLed[i],LOW);
        }
    }
}
