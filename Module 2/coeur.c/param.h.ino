#pragma once

void Mode_BCoeur()
{
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
delay(857);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(10,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
delay(857);
}

void Mode_1sur2()
{
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(857);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
}

void Mode_1sur3()
{
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
delay(857);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
}

 void Mode_auchoix()
{
digitalWrite(5,HIGH);
}

void Mode_Chenille()
{
digitalWrite(2,HIGH);
delay(200);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
delay(200);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
delay(200);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(200);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
delay(200);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
delay(200);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
delay(200);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(200);
digitalWrite(10,LOW);
}
