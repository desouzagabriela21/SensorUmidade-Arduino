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
  int sensor = digitalRead(2);
  
  Serial.print("Leitura do sensor de presença: ");
  Serial.println(sensor);
  
  delay(100);
  
  int sensorTemperatura = analogRead(3);
  
  sensorTemperatura = map(sensorTemperatura, 20, 358, -40 ,125);
  
  Serial.print("Leitura do sensor de temperatura: ");
  Serial.println(sensorTemperatura);
  
  delay(1000);
  
  int sensorUmidade = analogRead(1);
  
  sensorUmidade = map(sensorUmidade, 0, 876, 0 ,100);
  
  Serial.print("Leitura do sensor de umidade: ");
  Serial.println(sensorUmidade);
  
  delay(1000);
 
}
