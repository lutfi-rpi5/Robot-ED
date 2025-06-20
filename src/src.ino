// const int IN1 = 27;
// const int IN2 = 26;
// const int IN3 = 25;
// const int IN4 = 33;
// const int ENA = 16;
// const int ENB = 17;

// void setup() {
//   // put your setup code here, to run once:
//   pinMode(IN1, OUTPUT);
//   pinMode(IN2, OUTPUT);
//   pinMode(ENA, OUTPUT);
//   pinMode(IN3, OUTPUT);
//   pinMode(IN4, OUTPUT);
//   pinMode(ENB, OUTPUT);

//   // digitalWrite(IN1, LOW);
//   // digitalWrite(IN2, LOW);
//   // digitalWrite(IN3, LOW);
//   // digitalWrite(IN4, LOW);

//   // analogWrite(ENA, 100);
//   // analogWrite(ENB, 100);
// }


// void loop() {
//   // put your main code here, to run repeatedly:
//   analogWrite(ENA, 4000);
//   analogWrite(ENB, 4000);
//   digitalWrite(IN1, HIGH);
//   digitalWrite(IN2, LOW);
//   digitalWrite(IN3, HIGH);
//   digitalWrite(IN4, LOW);
// }


// Konfigurasi pin
const int IN1 = 27;
const int IN2 = 26;
const int IN3 = 25;
const int IN4 = 33;
const int ENA = 14;
const int ENB = 32;

void setup() {
  // Set pin arah sebagai output
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Set pin ENA dan ENB sebagai output PWM
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  // Jalankan mobil maju pada kecepatan penuh (255)
  forward(255);
}

void loop() {
  // Mobil terus berjalan maju
  // Jika ingin berhenti setelah beberapa waktu, gunakan:
  // delay(5000);
  // stop();
}

// Fungsi jalan maju
void forward(int speedPWM) {
  // Arah motor
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  // Kecepatan (PWM)
  analogWrite(ENA, speedPWM); // motor kiri
  analogWrite(ENB, speedPWM); // motor kanan
}

// Fungsi stop
void stop() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
