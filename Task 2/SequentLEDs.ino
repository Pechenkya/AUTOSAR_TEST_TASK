// Create colour enum for code-readability
enum LightPins
{
  RED_PIN = 5,
  GREEN_PIN = 6,
  BLUE_PIN = 7,
  YELLOW_PIN = 8
};

// Containing info about current colour
LightPins current_pin;

// Logic for choosing next LED
void set_next_LED()
{
  if(current_pin == YELLOW_PIN)
    current_pin = RED_PIN;
  else
    current_pin = current_pin + 1;
}

void setup() {
  // Setup Serial port
  Serial.begin(115200);

  // Pin Potentiometer as input
  pinMode(A0, INPUT);

  // Pin LED's as output
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);

  // Set default for current pin
  current_pin = RED_PIN;
}

void loop() {
  // Receive value from Potentiometer (0 - 1023) and adjust it to (100 - 10000)
  float new_delay = (analogRead(A0) / 1023.f) * 9900 + 100;

  // Blink with LED (on -> wait -> off)
  digitalWrite(current_pin, HIGH);
  delay(10);
  digitalWrite(current_pin, LOW);

  // Printing delay for debugging purposes
  Serial.println(new_delay);
  delay(new_delay);

  // Move to next LED
  set_next_LED();
}
