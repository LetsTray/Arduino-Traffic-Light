//LAMPU JALAN
int ljRed = 13;
int ljYellow = 12;
int ljGreen = 8;

//LAMPU PENYEBRANGAN
int lpRed = 7;
int lpYellow = 4;
int lpGreen = 2;

int btn_A = 11;
int btnState_A = 0; 
unsigned long startTime = 0;
const unsigned long interval = 11000;
bool timerActive = false;

void setup() {
  pinMode(ljRed, OUTPUT);
  pinMode(ljYellow, OUTPUT);
  pinMode(ljGreen, OUTPUT);

  pinMode(lpRed, OUTPUT);
  pinMode(lpYellow, OUTPUT);
  pinMode(lpGreen, OUTPUT);

  pinMode(btn_A, INPUT_PULLUP);

  digitalWrite(ljGreen, HIGH);
  digitalWrite(lpRed, HIGH);
}

void loop() {
  btnState_A = digitalRead(btn_A);

  if (btnState_A == LOW){
    startTime = millis();
    timerActive = true;
  }

  if (timerActive) {
    if (millis() - startTime >= interval){
      digitalWrite(ljGreen, LOW);
      digitalWrite(lpRed, LOW);
      delay(1000);

      digitalWrite(ljYellow, HIGH);
      digitalWrite(lpYellow, HIGH);
      delay(1000);

      digitalWrite(ljYellow, LOW);
      digitalWrite(lpYellow, LOW);
      delay(1000);

      digitalWrite(ljRed, HIGH);
      digitalWrite(lpGreen, HIGH);
      delay(5000);

      digitalWrite(ljRed, LOW);
      digitalWrite(lpGreen, LOW);
      delay(1000);

      digitalWrite(ljYellow, HIGH);
      digitalWrite(lpYellow, HIGH);
      delay(1000);

      digitalWrite(ljYellow, LOW);
      digitalWrite(lpYellow, LOW);
      delay(1000);

      timerActive = false;

      digitalWrite(ljGreen, HIGH);
      digitalWrite(lpRed, HIGH);
    }
  } 
}
