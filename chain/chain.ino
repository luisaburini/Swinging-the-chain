int step = 0;
const int DIRECTION = 2;
const int PULSE = 3;

void setup() {
  pinMode(DIRECTION, OUTPUT);
  pinMode(PULSE, OUTPUT);
} 

int i = 0;
const int total = 4800;
const int v = 1600;

void loop() {

  if (i == (total)-1) {
    // 2 minutos
    delay(60000);
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
  i = (i+1)%total;
  
}