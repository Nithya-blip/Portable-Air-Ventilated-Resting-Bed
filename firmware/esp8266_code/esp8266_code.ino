// Relay pin assignments
int relay1 = 2; // Pillow 1 IN
int relay2 = 3; // Pillow 1 OUT
int relay3 = 4; // Pillow 2 IN
int relay4 = 5; // Pillow 2 OUT

unsigned long inflateTime = 10000; // 10 sec inflate
unsigned long deflateTime = 15000; // 15 sec deflate (adjust as needed)

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);

  // all relays OFF initially (HIGH = OFF for active low relay boards)
  allOff();
}

void loop() {
  // ---- Step 1: Pillow 1 Inflate, Pillow 2 Deflate ----
  digitalWrite(relay1, LOW);   // Pillow1 IN ON
  digitalWrite(relay2, HIGH);  // Pillow1 OUT OFF
  digitalWrite(relay3, HIGH);  // Pillow2 IN OFF
  digitalWrite(relay4, LOW);   // Pillow2 OUT ON
  delay(inflateTime);           // Inflate time
  delay(deflateTime - inflateTime); // Extra time for slow deflation

  allOff();
  delay(1000);

  // ---- Step 2: Pillow 2 Inflate, Pillow 1 Deflate ----
  digitalWrite(relay1, HIGH);  // Pillow1 IN OFF
  digitalWrite(relay2, LOW);   // Pillow1 OUT ON
  digitalWrite(relay3, LOW);   // Pillow2 IN ON
  digitalWrite(relay4, HIGH);  // Pillow2 OUT OFF
  delay(inflateTime);           // Inflate time
  delay(deflateTime - inflateTime); // Extra time for slow deflation

  allOff();
  delay(1000);
}

void allOff() {
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
}
