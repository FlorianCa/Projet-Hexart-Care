//Initialization of the heartbeat value.
int pouls;


void setup()
{
    Serial.begin(9600);
}

void loop() 
{
  
  //here, we initializes an other variable, this one is for the counter, "compter" counts the number of times heartbeats are taken. 
  
  int compter = 0;

  //This "while" loop will take the heartbeat just 100 times, we can choose an other value for that loop if we want heartbeats to be taken more times.
  
  while(compter<=100)
  {
    
    //We use a "random" function before we can take the real heartbeats, the interval of value is made like that beacause the "normal" value of heartbeats per minutes is around 65. 
    
    pouls = random(50,80);
    delay(100);

    //We show compter on the command consol so we can attribute a number between 0 and 100 at each heartbeat taken.
    
    Serial.print(compter);

    //After that we print the pulse and the time after the start of the Arduino program.
    
    Serial.print(";");
    Serial.print(pouls);
    Serial.print(";");
    Serial.println(millis());

    //"compter++" made compter = compter+1 so each times the "while" repeat, compter take the value just above its former one 
    
    compter++;
  }
  while(1);
}
