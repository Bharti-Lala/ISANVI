int trigPin=2,echoPin=4,led=11;
void setup() {
Serial.begin (9600);

pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led, OUTPUT);

}

void loop() {

  long duration, distance;
  digitalWrite(trigPin, LOW);
  delay(1);
  digitalWrite(trigPin, HIGH);
  delay(5);
  digitalWrite(trigPin, LOW);
  
  //duration = pulseIn(echoPin, HIGH);
  distance = pulseIn(echoPin, HIGH, 40000)/58.2;
  
  //Serial.println(distance);
  
 if(distance<=6){ Serial.println("OUT OF RANGE"); digitalWrite(led,LOW);}
 else if(distance < 50   ) {
   digitalWrite(led, HIGH);
   Serial.println(distance);
 }
 else{
   digitalWrite(led, LOW);
   Serial.println(distance);
 }
 
 delay(50);
}
