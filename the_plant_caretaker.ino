#include "arduino_secrets.h"


#define RELAY_PIN    A5 
#define MOISTURE_PIN A0 // higher the number dryer the soil
#define SPEAKER_PIN 9
#define R_LED 3
#define G_LED 4

#define THRESHOLD 300 

// int water_count = 0; //how many times the flower is watered
int length = 12;
// char notes[] = "ccggaagffeeddc ";
char notes[] = "eeeeeeegcde "; //jinglebell 

int beats[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 4};
int tempo = 300;

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(SPEAKER_PIN, HIGH);
    delayMicroseconds(tone);
    digitalWrite(SPEAKER_PIN, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };

  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(SPEAKER_PIN, OUTPUT);
  pinMode(G_LED, OUTPUT);
  pinMode(R_LED, OUTPUT);


}

void loop() {
 
  int value = analogRead(MOISTURE_PIN); // read the analog value from sensor

  //when soil is wet
  if (value < THRESHOLD) {
    digitalWrite(RELAY_PIN, LOW);
    Serial.print("The soil is WET => turn pump OFF");
  }
  //when the soil is dry 
  else {
    Serial.println("The soil is DRY => turn pump ON");
    digitalWrite(RELAY_PIN, HIGH);
    delay(2000);
    digitalWrite(RELAY_PIN, LOW);
    //check if the soil is actually watered
    //if the soil is not watered
    delay(5000);
    int water_value = analogRead(MOISTURE_PIN);
    if(water_value > THRESHOLD){
      Serial.println("The soil is NOT WATERED, please fill the tank.");
      digitalWrite(R_LED, HIGH);
      digitalWrite(G_LED, LOW);
    }else{
      Serial.println("The soil is WATERED, thanks mate.");
      digitalWrite(R_LED, LOW);
      digitalWrite(G_LED, HIGH);
      //play sound after watered
      for (int i = 0; i < length; i++) {
        if (notes[i] == ' ') {
          delay(beats[i] * tempo);
        } else {
          playNote(notes[i], beats[i] * tempo);
        }
        delay(tempo / 2);
      }
    }
  }


  Serial.print(" (");
  Serial.print(value);
  Serial.println(")");

  //delay moisture testing for 10 sec
  delay(10000);
  //delay moisture testing for a day
  // delay(86400000);
}