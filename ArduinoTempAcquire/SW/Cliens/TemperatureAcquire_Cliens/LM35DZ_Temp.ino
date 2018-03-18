/*
 * 
 * 
 */

#define TEMPPIN 0

void LM35DZ_Temp_Initialize() {
  analogReference(INTERNAL);
}

float LM35DZ_Temp_GetCelsius() {
  float tempC;
  tempC = analogRead(TEMPPIN) / 9.31;
  return tempC;
}

