// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(A3, INPUT);
  pinMode(1, INPUT);

}

void loop()
{
  int sensorUmidade = analogRead(1);
  
  sensorUmidade = map(sensorUmidade, 0, 876, 0 ,100);
  
  Serial.print("Leitura do sensor de umidade: ");
  Serial.println(sensorUmidade);
  
  delay(100);
 
}
