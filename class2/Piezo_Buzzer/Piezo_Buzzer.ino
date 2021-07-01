#include <Melody.h>

int BuzzerPin = 2;

void setup()
{
  pinMode(BuzzerPin, OUTPUT);
}

void loop()
{
  //HarryPotter OST - Hedwig's Theme 출력
  play(BuzzerPin, 0);play(BuzzerPin, 1);play(BuzzerPin, 2);play(BuzzerPin, 3);
  
  //도레미파솔라시도 출력
  tone(BuzzerPin, c4);
  delay(500);
  tone(BuzzerPin, d4);
  delay(500);
  tone(BuzzerPin, e4);
  delay(500);
  tone(BuzzerPin, f4);
  delay(500);
  tone(BuzzerPin, g4);
  delay(500);
  tone(BuzzerPin, a4);
  delay(500);
  tone(BuzzerPin, b4);
  delay(500);
  tone(BuzzerPin, c5);
  delay(500);
  noTone(BuzzerPin);
}
