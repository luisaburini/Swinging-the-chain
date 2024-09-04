int step = 0;
int previous_step = -1;
int parcel = 1;
const int DIRECTION = 2;
const int PULSE = 3;

void setup() {
  pinMode(DIRECTION, OUTPUT);
  pinMode(PULSE, OUTPUT);
  

} 

const int times = 5-;
int i = 0;

void loop() {
  int v = 1600;

  if (i == times * v) {
    // 2 minutos
    delayMicroseconds(12000);
  }
  else {
    step = ((step+1)%v);

    if (step < v/2) {
      Serial.print("Step is below");
      digitalWrite(DIRECTION, LOW);
    } 
    else {
      Serial.print("Step is above");
      digitalWrite(DIRECTION, HIGH);
    }
    digitalWrite(PULSE, LOW);
    digitalWrite(PULSE, HIGH);
    delayMicroseconds(300);
  }
  i = i+1;
  
}
