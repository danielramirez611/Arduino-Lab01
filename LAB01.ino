byte dato;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, LOW);

  if (Serial.available()) {
    dato = Serial.read();

    switch (dato) {
      case 'A':
        for (int i = 0; i < 2; i++) {
          digitalWrite(13, HIGH); // Enciende el LED
          Serial.println("Encendido");
          delay(250);             // Espera 0.25 segundos
          digitalWrite(13, LOW);  // Apaga el LED
          Serial.println("Apagado");
          delay(250);             // Espera 0.25 segundos
        }
        break;
      case 'B':
        for (int i = 0; i < 4; i++) {
          digitalWrite(13, HIGH); // Enciende el LED
          Serial.println("Encendido");
          delay(250);             // Espera 0.25 segundos
          digitalWrite(13, LOW);  // Apaga el LED
          Serial.println("Apagado");
          delay(250);             // Espera 0.25 segundos
        }
        break;
      case 'C':
        digitalWrite(13, HIGH); // Enciende el LED
        Serial.println("Encendido");
        delay(1000);             // Espera 1 segundo
        digitalWrite(13, LOW);  // Apaga el LED
        Serial.println("Apagado");
        break;
      case 'D':
        digitalWrite(13, HIGH); // Enciende el LED
        Serial.println("Encendido");
        delay(2000);             // Espera 2 segundos
        digitalWrite(13, LOW);  // Apaga el LED
        Serial.println("Apagado");
        break;
    }
  }
}
