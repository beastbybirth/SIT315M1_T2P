int pin = 2;    //define interrupt pin as 2
volatile int state = LOW; // initialise the state as low
//declare them as volatile.

void setup() 
{
   pinMode(13, OUTPUT); //set the output pin as 13
   pinMode(2, INPUT); // set the input pin as 2 for interrupt
   attachInterrupt(digitalPinToInterrupt(pin), led, CHANGE);
   //interrupt at pin 2 blink when pin to change the value,
   //change value means when the motion is detected
} 
void loop() { 
 
} 

void led() { 
   state = !state; //state will get changed vice-versa
  digitalWrite(13, state); //pin 13 follows the value of state
}
