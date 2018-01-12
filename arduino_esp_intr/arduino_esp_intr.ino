const byte interruptPin = 5;
volatile byte interruptCounter = 0;
int numberOfInterrupts = 0;
 
void setup() {
 
  Serial.begin(9600);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(interruptPin, handleInterrupt, FALLING);
 
}
 
void handleInterrupt() {
  interruptCounter++;
}
 
void loop() {
 
  if(interruptCounter>0){
 
      interruptCounter--;
      numberOfInterrupts++;
 
      Serial.print("An interrupt has occurred. Total: ");
      Serial.println(numberOfInterrupts);
  }
 
}
