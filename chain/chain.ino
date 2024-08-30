int step = 0;
int previous_step = -1;
int parcel = 1;
const int DIRECTION = 2;
const int PULSE = 3;

void setup() {
  pinMode(DIRECTION, OUTPUT);
  pinMode(PULSE, OUTPUT);
  

}

void loop() {
  step = (step+1)%100

  if step < 50 {
    digitalWrite(DIRECTION, LOW);
  } 
  else {
    digitalWrite(DIRECTION, HIGH)
  }
  digitalWrite(PULSE, LOW);
  digitalWrite(PULSE, HIGH);
  delayMicroseconds(60);
}
