byte komut = 0;

void setup() {
  Serial.begin(9600);
  Serial.write(0xAA); Serial.write(0x37);
  delay(1000);
  Serial.write(0xAA); Serial.write(0x21);

  pinMode(8, OUTPUT); //titresim
}

void loop() {
  while (Serial.available()) {
    komut = Serial.read();

    switch (komut) {
      case 0x11:   //onur
        digitalWrite(8, HIGH);
        break;

      case 0x12:  //aybuke
        digitalWrite(8, HIGH);
        break;

      case 0x13:  //seda
        digitalWrite(8, HIGH);
        break;

      case 0x14:  //ahmet
        digitalWrite(8, HIGH);
        break;

      case 0x15:  //elif
        digitalWrite(8, HIGH);
        break;
    }
  }
}
