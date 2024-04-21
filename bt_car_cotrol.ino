char val;
//motor r
const int M1 = 4;  //fw
const int M2 = 5;  // back
//motor l
const int M3 = 6;  //fw
const int M4 = 7;  // back
void setup(){
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M3, OUTPUT);
  pinMode(M4, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if (Serial.available()) {
    val = Serial.read();
    Serial.println(val);
    if(val == 'S'){
      STOP();
     }
    if(val == 'F'){
      fw();
     }
    if(val == 'B'){
      back();
     }
    if(val == 'L'){
      tl();
     }
    if(val == 'R'){
      tr();
     }
  }
}


void fw() {
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);
  digitalWrite(M3, HIGH);
  digitalWrite(M4, LOW);
}
void back() {
  digitalWrite(M1, LOW);
  digitalWrite(M2, HIGH);
  digitalWrite(M3, LOW);
  digitalWrite(M4, HIGH);
}
void STOP() {
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  digitalWrite(M3, LOW);
  digitalWrite(M4, LOW);
}
void tr() {
  digitalWrite(M1, LOW);
  digitalWrite(M2, HIGH);
  digitalWrite(M3, HIGH);
  digitalWrite(M4, LOW);
}
void tl() {
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);
  digitalWrite(M3, LOW);
  digitalWrite(M4, HIGH);
}
