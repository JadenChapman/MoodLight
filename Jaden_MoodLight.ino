
const int ldrPin = A0;
const int redPin = 9;
const int greenPin = 11;
const int bluePin = 10;
const int rPin = 6;
const int gPin = 65;
const int bPin = 3;
const int yLed = 13;
const int bLed = 12;
const int gLed = 8;
const int dark = 650;

void setup() {
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
pinMode(rPin, OUTPUT);
pinMode(gPin, OUTPUT);
pinMode(bPin, OUTPUT);
pinMode(yLed, OUTPUT);
pinMode(bLed, OUTPUT);
pinMode(gLed, OUTPUT);
Serial.begin(9600);
}

void loop() {
int lightLevel = analogRead(ldrPin); // 0 = bright, 1023 = dark
Serial.println(lightLevel);

if (lightLevel > dark) {
int brightness = map(lightLevel, dark, 1023, 255, 0);
brightness = constrain(brightness, 0, 255);

fadeColors(brightness);
} else {
// Turn off RGB when it's too bright
fadeColors(0);
}





if(lightLevel < 900){
digitalWrite(gLed, HIGH);
digitalWrite(bLed, LOW);
digitalWrite(yLed,LOW);
}

if(lightLevel < 750){
digitalWrite(bLed, HIGH);
digitalWrite(gLed,LOW);
digitalWrite(yLed,LOW);
}

if(lightLevel < 650){
digitalWrite(yLed, HIGH);
digitalWrite(gLed, LOW);
digitalWrite(bLed, LOW);

}
}
// Function to fade RGB colors based on brightness
void fadeColors(int brightness) {
analogWrite(redPin, brightness); // Red gets brighter
analogWrite(greenPin, 255 - brightness); // Green fades out
analogWrite(bluePin, brightness / 2); // Blue stays dimmer
digitalWrite(yLed, brightness);
digitalWrite(bLed, brightness);
digitalWrite(gLed, brightness);
}







