// Define an array of ints that represent the notes
int notes[] = {262, 294, 330, 349};

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read the voltage value coming from the circut and store in keyVal
  // the voltage will vary depending on what combination of resistors is activated
  int keyVal = analogRead(A0);
  Serial.println(keyVal);

  // Determine the notes to play
  if (keyVal == 1023) {
    tone(8, notes[0]);
  }

  else if (keyVal >= 990 && keyVal <= 1010) {
    tone(8, notes[1]);
  }

  else if (keyVal >= 505 && keyVal <= 515) {
    tone(8, notes[2]);
  }

  else if (keyVal >= 5 && keyVal <= 10) {
    tone(8, notes[3]);
  }

  else {
    noTone(8);
  }
  
}
