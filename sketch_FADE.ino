// 3 LED Fade in and out. 4/3/2016 Spring
int led1 = 3;
int led2 = 10;
int led3 = 11;



void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


for(int i = 0;i < 255; i++){
  Serial.println(i);
  analogWrite(led1,i);
  delay(2);
  analogWrite(led2,i);
  delay(2);
  analogWrite(led3,i);
  delay(2);
}

for(int i = 255; i > 0; i--){
  Serial.println(i);
  analogWrite(led1,i);
  delay(2);
  analogWrite(led2,i);
  delay(2);
  analogWrite(led3,i);
  delay(2);
  

  
  
}


}
