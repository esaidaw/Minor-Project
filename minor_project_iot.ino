int l;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);

}

void loop() {


  l = analogRead(A0);
  if (l > 75) {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);  //value collected from LDR for red ranging
    digitalWrite(13, HIGH);


  } else if ((40 < l) && (l < 60)) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);//value collected from LDR for blue ranging
    digitalWrite(11, HIGH);

  } else if (10 >l)  {
    digitalWrite(11, LOW);//value collected from LDR for green ranging
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
  }

    Serial.println(l);
    delay(100); //repeated values collected from LDR

  }
