
const int trigPin = 4;
const int echoPin = 5;
const int buzzerPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  
  int duration = pulseIn(echoPin,HIGH);
  delay(50);
  
  int distance = duration /29.1;
  if (distance <20){
    digitalWrite(buzzerPin,HIGH);
  }
  else {
    digitalWrite(buzzerPin,LOW);
  }
}
