/*
  Three LED Chase Lights


*/
// Declare integer variables for LED On and Off time
// Time is in miliseconds
int onTime = 1000;
int offTime = 10 ;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT); //LED 1
  pinMode(3, OUTPUT); //LED 2
  pinMode(4, OUTPUT); //LED 3
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);     // turn LED 1 on (HIGH is the voltage level)
  delay(onTime);             // wait for 'onTime'
  digitalWrite(2, LOW);      // turn the LED 1 off by making the voltage LOW
  delay(offTime);            // wait  for 'offTime'
  digitalWrite(3, HIGH);     // turn LED 2 on (HIGH is the voltage level)
  delay(onTime);             // wait for 'onTime'
  digitalWrite(3, LOW);      // turn LED 2 off by making the voltage LOW
  delay(offTime);            // wait  for 'offTime'
  digitalWrite(4, HIGH);     // turn LED 3 on (HIGH is the voltage level)
  delay(onTime);             // wait for 'onTime'
  digitalWrite(4, LOW);      // turn LED 3 off by making the voltage LOW
  delay(offTime);            // wait  for 'offTime'
}
