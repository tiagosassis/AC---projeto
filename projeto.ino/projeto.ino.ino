int potenciometro = 0;
int sensorValue;
int outputValue;
int pin_output1 = D0;
int pin_output2 = D1;
int pin_output3 = D2;

void setup() {
  Serial.begin(9600);
  pinMode(pin_output1, OUTPUT);
  pinMode(pin_output2, OUTPUT);
  pinMode(pin_output3, OUTPUT);
  pinMode(potenciometro, INPUT);
}

void loop() {

  sensorValue = analogRead(potenciometro);
  outputValue = map(sensorValue, 0, 1023, 0, 255);

  digitalWrite(pin_output1, HIGH && ( B00000001));
  digitalWrite(pin_output2, HIGH && ( B00000010));
  digitalWrite(pin_output3, HIGH && ( B00000100));
  
  Serial.print("Leitura do sensor: ");
  Serial.println(sensorValue);
  Serial.print("Saída mapeada do sensor: ");
  Serial.println(outputValue);
  Serial.println("-------------------------------------");
  
  delay(1000);
}
