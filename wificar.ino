
/* Algobel Technologies & Innovations
 * Auth : Niwantha 
 * Email : niwantha@algobel.com
 * Free to Use 
 */


#define M1A 14 // Motor IN1 :: NodeMcu D5
#define M2A 12 // Motor IN2 :: NodeMcu D6
#define M1B 13 // Motor IN3 :: NodeMcu D7
#define M2B 15 // Motor IN4 :: NodeMcu D8

void setup() ;
void loop();
void forward();
void setspeed(int MA, int MB);

void setup() {
  pinMode(M1A, OUTPUT); // Motor IN1
  pinMode(M2A, OUTPUT); // Motor IN2
  pinMode(M1B, OUTPUT); // Motor IN3
  pinMode(M2B, OUTPUT); // Motor IN4
  Serial.begin(115200);
  Serial.println("Motor Pin Set");
  delay(1000);
}

void setspeed(int MA, int MB) {
  analogWrite(M1A, MA);
  analogWrite(M1B, MB);
}


void forward() {

  digitalWrite(M1A, HIGH);
  digitalWrite(M1B, HIGH);
}

void backward() {

  digitalWrite(M2A, HIGH);
  digitalWrite(M2B, HIGH);
}
void right() {
  analogWrite(M1A, 400);
  analogWrite(M1B, 800);

}
void right() {
  analogWrite(M1A, 800);
  analogWrite(M1B, 400);
}

void stopmotors() {
  digitalWrite(M1A, LOW);
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, LOW);
  digitalWrite(M2B, LOW);
}

void loop() {
  stopmotors();
  delay(500);
  forward();
  delay(2000);
  stopmotors();
  delay(500);
  backward()
  delay(2000);
  

}
