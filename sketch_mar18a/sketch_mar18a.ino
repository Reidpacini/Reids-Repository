#define  A1 5
#define  A2 4
#define  B1 3
#define  B2 2
#define  SENSOR 8
int x;
int y;
void setup() {
  Serial.begin(9600);
  pinMode(A2, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(SENSOR, INPUT);
  pinMode(A4, INPUT);
  pinMode(6, INPUT);


}

void loop() {
  y = analogRead(A4);
  Serial.println(y);
  delay(150);


  //x = digitalRead(8);
  if (x > 0) {
    //   Serial.println("BLACK");
  } else {
    //  Serial.println("WHITE");
  }

  //  x = analogRead(4);
  // Serial.println(x);
  //  delay(150);


  // digitalWrite(A2, HIGH);
  // digitalWrite(A1, LOW);
  // digitalWrite(B2, HIGH);
  // digitalWrite(B1, LOW);
  // delay(2000);
  //  digitalWrite(A2, HIGH);
  //  digitalWrite(A1, LOW);
  //  digitalWrite(B2, LOW);
  // digitalWrite(B1, HIGH);
  // delay(2000);

}
