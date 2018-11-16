#include "cardio.h"

//Initialization of the inconstant values.

//Initialization of the pulse sensor connected with the 0pin.

int capteurPouls = 0;

//Initialization of the circuit LED.

int coeur = 13;

//Creation of a table with 10 values, each value is associate with a Pin on the Arduino

int TabPinLed[10]={2,3,4,5,6,7,8,9,10,11}; 

//Initialization of the count value for the "for" instruction in the "cardio" program.

int i;

//Creation of a "Signal" inconstant value which contain the raw data, this value oscilliate between 0 and 1023.

double Signal; //write with a capital letter because it is a command

//Thanks to that value, we can detect which pulse we can consider or not with a step at 2.5 Volts.

float valeurSeuil = 2.5;


// SETUP FUNCTION
void setup() {

   //Make the LED blink depending on the heartbeat.
    
   pinMode(coeur,OUTPUT); 
   Serial.begin(9600);
   
   //Each "pinMode" instruction associate a pin on the Arduino to an output.     
   
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);     
}

// LOOP FUNCTION 
void loop() {

   //Read the pulse value and associate the value to the inconstant value "signal".
  
   Signal = analogRead(capteurPouls);  

   //Printing of the signal converted in Volt.
                                      
   Serial.print(Signal * 5 / 1023); 

   //Printing of ";"
   
   Serial.print(";");

   //Display the time since the beginning of the program.
   
   Serial.println(millis()); 

   //Calling the bcoeur function.

   Mode_bCoeur();
}
