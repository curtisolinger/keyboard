// Declare an array of ints called buttons
// int buttons[6];

// Set the first element of the array to 2
// int buttons[0] = 2;

// Define an array of ints that represent the notes
int notes[] = {262, 294, 330, 349};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int keyVal = analogRead(A0);
  Serial.println(keyVal);

}
