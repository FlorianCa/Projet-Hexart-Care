int pouls;

void setup() {
    Serial.begin(9600);
}

void loop() {
  int x = 0;
  while(x<=100){
    pouls = random(50,80);
    delay(100);
    Serial.print(x);
    Serial.print(";");
    Serial.print(pouls);
    Serial.print(";");
    Serial.println(millis());
    x++;
  }
  while(1);
}
