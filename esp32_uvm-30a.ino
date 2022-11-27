/*
 * ESP32 Read UVM-30A sensor
 * Analog PIN: 35
 * 
 * Author: Rangel Barbosa
 * Matherial from (Luiz): https://www.google.com/maps/place/Arduino+Santa+Efig%C3%AAnia/data=!3m1!4b1!4m2!3m1!1s0x94ce585bcd8d2c1f:0x3fde657a1dfea4ad
 * 
 * Credits:
 * https://electropeak.com/learn/interfacing-uvm30a-uv-light-sensor-module-with-arduino/
 * https://cdn.awsli.com.br/945/945993/arquivos/UVM-30A.pdf
 */
 
void setup(void) {
  // put your setup code here, to run once:
  Serial.begin(115200);
  analogReadResolution(10);
  analogSetPinAttenuation(35, ADC_11db); //ADC_6db -> ideal.
}

void loop(void) {
  // put your main code here, to run repeatedly:
  float sensorValue;
  sensorValue = analogRead(35);//connect UV sensors to Analog 0
  Serial.print(sensorValue*3300/1023.0);//print the value in mV to serial
  Serial.println("mV");
  delay(100); 
}
