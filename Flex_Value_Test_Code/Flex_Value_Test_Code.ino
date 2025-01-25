const int flexPin1 = A2; 
const int flexPin2 = A3;
const int flexPin3 = A4; 
const int flexPin4 = A5; 
 
void setup() 
{ 
  Serial.begin(9600);
} 
 
void loop() 
{ 
  int flexValue1;
  int flexValue2;
  int flexValue3;
  int flexValue4;

  flexValue1 = analogRead(flexPin1);
  flexValue2 = analogRead(flexPin2);
  flexValue3 = analogRead(flexPin3);
  flexValue4 = analogRead(flexPin4);

  Serial.print("sensor1: ");
  Serial.print(flexValue1);
  Serial.print("  ");
  
  Serial.print("sensor2: ");
  Serial.print(flexValue2);
  Serial.print("  ");

  Serial.print("sensor3: ");
  Serial.print(flexValue3);
  Serial.print("  ");

  Serial.print("sensor4: ");
  Serial.println(flexValue4);

  
  delay(20);
}