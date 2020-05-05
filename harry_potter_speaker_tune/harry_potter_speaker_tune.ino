
// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0

// Set this to be the pin that your buzzer resides in. (Note that you can only have one buzzer actively using the PWM signal at a time).
int tonePin = 9;
void setup() {

}

void midi() {

    tone(tonePin, 493, 333.333);
    delay(333.333);
    tone(tonePin, 659, 499.9995);
    delay(499.9995);
    tone(tonePin, 783, 166.6665);
    delay(166.6665);
    tone(tonePin, 739, 333.333);
    delay(333.333);
    tone(tonePin, 659, 666.666);
    delay(666.666);
    tone(tonePin, 987, 333.333);
    delay(333.333);
    tone(tonePin, 880, 999.999);
    delay(999.999);
    tone(tonePin, 739, 999.999);
    delay(999.999);
    tone(tonePin, 659, 499.9995);
    delay(499.9995);
    tone(tonePin, 783, 166.6665);
    delay(166.6665);
    tone(tonePin, 739, 333.333);
    delay(333.333);
    tone(tonePin, 587, 666.666);
    delay(666.666);
    tone(tonePin, 698, 333.333);
    delay(333.333);
    tone(tonePin, 493, 1666.665);
    delay(1666.665);
    tone(tonePin, 493, 333.333);
    delay(333.333);
    tone(tonePin, 659, 499.9995);
    delay(499.9995);
    tone(tonePin, 783, 166.6665);
    delay(166.6665);
    tone(tonePin, 739, 333.333);
    delay(333.333);
    tone(tonePin, 659, 666.666);
    delay(666.666);
    tone(tonePin, 987, 333.333);
    delay(333.333);
    tone(tonePin, 1174, 666.666);
    delay(666.666);
    tone(tonePin, 1108, 333.333);
    delay(333.333);
    tone(tonePin, 1046, 666.666);
    delay(666.666);
    tone(tonePin, 830, 333.333);
    delay(333.333);
    tone(tonePin, 1046, 499.9995);
    delay(499.9995);
    tone(tonePin, 987, 166.6665);
    delay(166.6665);
    tone(tonePin, 932, 333.333);
    delay(333.333);
    tone(tonePin, 739, 666.666);
    delay(666.666);
    tone(tonePin, 783, 333.333);
    delay(333.333);
    tone(tonePin, 659, 1666.665);
    delay(1666.665);
    tone(tonePin, 783, 333.333);
    delay(333.333);
    tone(tonePin, 987, 666.666);
    delay(666.666);
    tone(tonePin, 783, 333.333);
    delay(333.333);
    tone(tonePin, 987, 666.666);
    delay(666.666);
    tone(tonePin, 783, 333.333);
    delay(333.333);
    tone(tonePin, 1046, 666.666);
    delay(666.666);
    tone(tonePin, 987, 333.333);
    delay(333.333);
    tone(tonePin, 932, 666.666);
    delay(666.666);
    tone(tonePin, 739, 333.333);
    delay(333.333);
    tone(tonePin, 783, 499.9995);
    delay(499.9995);
    tone(tonePin, 987, 166.6665);
    delay(166.6665);
    tone(tonePin, 932, 333.333);
    delay(333.333);
    tone(tonePin, 466, 666.666);
    delay(666.666);
    tone(tonePin, 493, 333.333);
    delay(333.333);
    tone(tonePin, 987, 1666.665);
    delay(1666.665);
    tone(tonePin, 783, 333.333);
    delay(333.333);
    tone(tonePin, 987, 666.666);
    delay(666.666);
    tone(tonePin, 783, 333.333);
    delay(333.333);
    tone(tonePin, 987, 666.666);
    delay(666.666);
    tone(tonePin, 783, 333.333);
    delay(333.333);
    tone(tonePin, 1174, 666.666);
    delay(666.666);
    tone(tonePin, 1108, 333.333);
    delay(333.333);
    tone(tonePin, 1046, 666.666);
    delay(666.666);
    tone(tonePin, 830, 333.333);
    delay(333.333);
    tone(tonePin, 1046, 499.9995);
    delay(499.9995);
    tone(tonePin, 987, 166.6665);
    delay(166.6665);
    tone(tonePin, 932, 333.333);
    delay(333.333);
    tone(tonePin, 739, 666.666);
    delay(666.666);
    tone(tonePin, 783, 333.333);
    delay(333.333);
    tone(tonePin, 659, 1666.665);
    delay(1666.665);

}

void loop() {
    // Play midi
    midi();
}
