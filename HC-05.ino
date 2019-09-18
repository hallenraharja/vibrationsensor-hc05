int nilaiSensor;
int pinSensor;
int bunyi;
void setup() {
  // put your setup code here, to run once:
  pinSensor=7;
  bunyi=13;
  Serial.begin(9600);
  pinMode(pinSensor, INPUT);
  pinMode(bunyi, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Hallen");
  if (digitalRead(pinSensor)==HIGH)
  {
    nilaiSensor=1;
    digitalWrite(bunyi, HIGH);
  }
  if (digitalRead(pinSensor)==LOW)
  {
    nilaiSensor=0;
    digitalWrite(bunyi, LOW);
    }
  Serial.println("Nilai Sensor Adalah...");
  Serial.println(nilaiSensor);
  delay(100);
  
}

