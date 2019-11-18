volatile bool state=0;
int timedelay=1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available()) {
      state=!state;
  }

  timedelay=1000+state*1000;

  digitalWrite(LED_BUILTIN, HIGH);
  delay(timedelay);
  digitalWrite(LED_BUILTIN, LOW);
  delay(timedelay);

}
