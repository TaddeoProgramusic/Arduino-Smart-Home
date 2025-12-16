#include <Servo.h>
#include <SoftwareSerial.h>

Servo ServitoChevere;
SoftwareSerial BT(10, 11); // RX, TX
char dato;
const int LED = 2;
const int BUZZ = 7;
const int VENTILADOR = 6;



bool estLed = false;
bool estVentilador = false;

void setup() {
  pinMode(VENTILADOR, OUTPUT);
  ServitoChevere.attach(3);
  pinMode(BUZZ, OUTPUT);
  BT.begin(38400);
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  ServitoChevere.write(180);
}

void loop() {
  if (BT.available()) {
    dato = BT.read();
    Serial.write(dato);

    switch(dato) 
    {
      case 'L':
        toggleLED();
      break;
    
      case 'P':
        servito();
      break;

      case 'E':
        servitoError();
      break;

      case 'V':
        toggleVENTILADOR();
      break;
    }
  }

  if (Serial.available()) {
    BT.write(Serial.read());
  }

}

void toggleLED() 
{
  estLed = !estLed;
  digitalWrite(LED, estLed ? HIGH : LOW);
}

void servito()
{
  ServitoChevere.write(90);
  delay(1000);
  ServitoChevere.write(180);
}

void servitoError()
{
  tone(BUZZ, 1000, 500);
  delay(700);
  tone(BUZZ, 500, 500);
}

void toggleVENTILADOR() 
{
  estVentilador = !estVentilador;
  digitalWrite(VENTILADOR, estVentilador ? HIGH : LOW);
}