//-----------------------------------------------------------------------
//Shoot a Dice
//https://github.com/tomitomi3/Make
//-----------------------------------------------------------------------
void setup() {
  Serial.begin(9600);
  //output
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);

  //check
  pinMode(LED_BUILTIN, OUTPUT);
  for ( int i = 0; i < 5; i++)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
    digitalWrite(LED_BUILTIN, LOW);
    delay(300);
  }
}

void loop() {
  while (Serial.available() > 0)
  {
    byte InputData = Serial.read();
    
    //receve 'a'
    if (InputData == 'a') {
      //digitalWrite(LED_BUILTIN, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(8, HIGH);
      delay(13);
      digitalWrite(13, LOW);
      digitalWrite(8, LOW);
    }
    
    //receve 'b' for debug
    if (InputData == 'b') {
      //digitalWrite(LED_BUILTIN, LOW);
    }
  }
}
