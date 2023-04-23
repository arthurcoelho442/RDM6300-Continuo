//Programa: Leitor RFID RDM6300 com ESP8266 NodeMCU
//Autor: Arduino e Cia

#include <SoftwareSerial.h>
#include "RDM6300.h"

//Inicializa a serial nos pinos 12 (RX) e 13 (TX) 
SoftwareSerial RFID(D6, D7);

//Configura o led na porta digital D2
int Led = D4;

uint8_t Payload[6]; // used for read comparisons

RDM6300 RDM6300(Payload, D6, D7);

void setup()
{
  //Define o pino do led como saida
  pinMode(Led, OUTPUT);
  
  //Inicializa a serial para o leitor RDM6300
  RFID.begin(9600);
  
  //Inicializa a serial para comunicacao com o PC
  Serial.begin(9600);
  
  //Informacoes iniciais
  Serial.println("Leitor RFID RDM6300");
}

void loop()
{
  //Apaga o led
  delay(100);
  digitalWrite(Led, HIGH);
  
  //Aguarda a aproximacao da tag RFID
  while (RFID.available() > 0) {
    //Aciona o led
    digitalWrite(Led, LOW);
    
    uint8_t c = RFID.read();
    if (RDM6300.decode(c))
      Serial.println("ID TAG: " + RDM6300.result());
  }
}