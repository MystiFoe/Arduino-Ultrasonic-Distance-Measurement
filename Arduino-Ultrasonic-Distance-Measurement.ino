const int trigPin = 5;  // Trigger pin connected to digital pin 5
const int echoPin = 6;  // Echo pin connected to digital pin 6
float duration, distance;

void setup() {
  pinMode(trigPin, OUTPUT);  // Set trigPin as output
  pinMode(echoPin, INPUT);   // Set echoPin as input
  Serial.begin(9600);        // Initialize the serial communication
}

void loop() {
  digitalWrite(trigPin, LOW);        // Set trigPin to low
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);       // Generate a 10us pulse to trigger the sensor
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);  // Measure the duration of the echo pulse
  distance = (duration * 0.0343) / 2; // Calculate the distance in centimeters

  Serial.print("Distance: ");        // Print the distance on the serial monitor
  Serial.println(distance);

  delay(100);                        // Delay before the next measurement
}
