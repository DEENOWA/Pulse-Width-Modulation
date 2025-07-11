int redLed = 11;
int dimmest = 1;
int brightest = 255;
// int wait = 500;

void setup() {
  pinMode(redLed,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  analogWrite(redLed,dimmest);
  // delay(wait);
  // analogWrite(redLed,brightest);
  // delay(wait);
  // put your code here, to run repeatedly:
}
