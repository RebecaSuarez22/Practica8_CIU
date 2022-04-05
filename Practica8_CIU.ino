int x;
int y;
double i = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    i += PI;
    y = map(sin(i/20)*100, - 100, 100, 1, 1000);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(y/2);
    digitalWrite(LED_BUILTIN, LOW);
    delay(y/2);
}
