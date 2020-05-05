//code by VGS
int hz = 0;    //frequency variable
int speaker_pin=8;   //positive terminal of the speaker & connect the negaive terminal to the ground
int timeinterval=5;
void setup() {
  Serial.begin(9600);  //to know the frequency use serial monitor
}

void loop() {
  for (hz = 20; hz <= 20000; hz += 1) { // goes from 20 hz to 20,0000 hz.....you can also change the frequency if u want
    // in steps of 1 degree
    tone( speaker_pin , hz);
    Serial.println( hz);
    delay( timeinterval);                       // waits 5ms for speaker to respond
  }
  for (hz = 20000; hz >= 20; hz -= 1) { // goes from 20 hz to 20,0000 hz
    tone( speaker_pin, hz); 
    Serial.println( hz);
    delay( timeinterval);                      // waits 5ms for speaker to respond
  }
}
