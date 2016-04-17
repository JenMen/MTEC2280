const int ledPin = 13;
const int ledPin2 = 10;
const int ledPin3 = 3;
const int switchPin = 2;
const int switchPin2 = 3;
int switchRead = 0;
int switchRead2 = 0;
boolean pressing = false;
boolean pressing2 = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
 // pinMode(ledPin3, OUTPUT);
  pinMode(switchPin, INPUT);
  pinMode(switchPin2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(ledPin, HIGH);
  switchRead = digitalRead(switchPin);
 
    switchRead2 = digitalRead(switchPin2);
   

  if (switchRead == 1 ) {
   // digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);
     Serial.println("Yellow: On");

    //digitalWrite(ledPin3, HIGH);
  }

  if (switchRead == 0 ) {
   // digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
    //digitalWrite(ledPin3, LOW);
  }
    if (switchRead2 == 1 ) {
    digitalWrite(ledPin, HIGH);
        Serial.println("Green: On");

    //digitalWrite(ledPin2, HIGH);
    //digitalWrite(ledPin3, HIGH);
  }

  if (switchRead2 == 0 ) {
    digitalWrite(ledPin, LOW);
    //digitalWrite(ledPin2, LOW);
    //digitalWrite(ledPin3, LOW);
  }
}
