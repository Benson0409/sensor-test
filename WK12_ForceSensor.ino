const int sensor_pin = 14;

void setup() {
  Serial.begin(115200);
  pinMode(sensor_pin, INPUT);
}

void loop() {
  Serial.print(analogRead(sensor_pin));
  delay(200);
}
