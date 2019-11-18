volatile bool state=0;
int timedelay=1000;
int incomingByte = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available()) {
      state=!state;
      incomingByte = Serial.read();
  }

  timedelay=1000+state*1000;

  Serial.print("timedelay: ");   // send a capital A
  Serial.println(timedelay);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(timedelay);
  digitalWrite(LED_BUILTIN, LOW);
  delay(timedelay);
  

}
