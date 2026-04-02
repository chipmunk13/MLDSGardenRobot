int obstacle_detector = 10; // Declaration of the sensor input pin
int value; // Temporary variable
   
void setup () {
  pinMode(obstacle_detector, INPUT); // Initialization sensor pin
  digitalWrite(obstacle_detector, HIGH); // Activation of internal pull-up resistor
  Serial.begin(9600); // Initialization of the serial monitor
  Serial.println("KY-032 Obstacle detection");
}
   
void loop () {
  // The current signal at the sensor is read out.
  value = digitalRead(obstacle_detector);
  // If a signal could be detected, this is displayed on the serial monitor.
  if (value == LOW) {
    Serial.println("Obstacle recognized");
    delay(200); // 200 ms break
  }
}

