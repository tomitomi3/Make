//-------------------------------------------------------------------------------------
//Serialの転送速度実験
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
//Setup
//-------------------------------------------------------------------------------------
void setup()
{
  Serial.begin(115200);
}

//-------------------------------------------------------------------------------------
//Loop
//-------------------------------------------------------------------------------------
unsigned int dat1[1]      = {0};
unsigned int dat2[2]      = {0};
unsigned int dat4[4]      = {0};
unsigned int dat8[8]      = {0};
unsigned int dat16[16] = {0};
unsigned int dat32[32] = {0};
unsigned int dat64[64] = {0}; //64sample 128byte
void loop()
{
  long t0, t1;

  //serial println
  Serial.print("Serial.Prinln\n");
  t0 = micros();
  Serial.println(1024);
  t1 = micros() - t0;
  Serial.println((float)t1 / 1000.0);
  delay(2000);

  //serial write
  Serial.print("Serial.Write 1byte\n");
  t0 = micros();
  Serial.write((uint8_t*)dat1, 2);
  t1 = micros() - t0;
  Serial.println((float)t1 / 1000.0);
  delay(2000);

  Serial.print("Serial.Write 2byte\n");
  t0 = micros();
  Serial.write((uint8_t*)dat2, 4);
  t1 = micros() - t0;
  Serial.println((float)t1 / 1000.0);
  delay(2000);

  Serial.print("Serial.Write 4byte\n");
  t0 = micros();
  Serial.write((uint8_t*)dat4, 8);
  t1 = micros() - t0;
  Serial.println((float)t1 / 1000.0);
  delay(2000);

  Serial.print("Serial.Write 8byte\n");
  t0 = micros();
  Serial.write((uint8_t*)dat8, 16);
  t1 = micros() - t0;
  Serial.println((float)t1 / 1000.0);
  delay(2000);

  Serial.print("Serial.Write 16byte\n");
  t0 = micros();
  Serial.write((uint8_t*)dat16, 32);
  t1 = micros() - t0;
  Serial.println((float)t1 / 1000.0);
  delay(2000);

  Serial.print("Serial.Write 32byte\n");
  t0 = micros();
  Serial.write((uint8_t*)dat32, 64);
  t1 = micros() - t0;
  Serial.println((float)t1 / 1000.0);
  delay(2000);
 
  Serial.print("Serial.Write 64byte\n");
  t0 = micros();
  Serial.write((uint8_t*)dat64, 128);
  t1 = micros() - t0;
  Serial.println((float)t1 / 1000.0);
  delay(10000);
}

