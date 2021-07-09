#include <Melody.h>

int TrigPin = 6;
int EchoPin = 7;
int BuzzerPin = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  pinMode(BuzzerPin, OUTPUT);
}

void loop()
{
  //초음파 송신
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);

  //초음파 수신
  float duration = pulseIn(EchoPin, HIGH);

  //물체와의 거리를 cm로 변환
  float distance = 340*duration / 10000 / 2;

  //거리가 10cm~20cm일 때 원하는 노래 재생
  if(distance >= 10 && distance < 20){
    Serial.println("\nChoose a song\n0. HarryPotter\n1. Pirates of the Caribbean\n2. kimetsu no yaiba\n3. baby shark\n4. Close");
    while(Serial.available()==0){}
    int num = Serial.parseInt();
    if(num >=0 && num < 4){
      Serial.print("track ");
      Serial.print(num);
      Serial.println(" play");
      delay(500);
      play(BuzzerPin, num);
    }else if(num == 4){
      Serial.print("Bye!");
      Serial.end();
    }else Serial.println("Enter a different number");
  }
}
