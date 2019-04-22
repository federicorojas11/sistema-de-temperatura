int pinLDR = A0;
int lecturaLDR = 0;
int pinRojo = 4;
int pinAmarillo = 3;
int pinVerde = 2;


void setup() {
    
  Serial.begin(9600);
  pinMode(pinRojo,OUTPUT);
  pinMode(pinAmarillo,OUTPUT);
  pinMode(pinVerde,OUTPUT);

}

void loop() {
  lecturaLDR = analogRead(pinLDR); 
  Serial.println(lecturaLDR);  //Mostramos la lectura por el monitor serie
  delay(1000);


  if (lecturaLDR>400)
  {
    digitalWrite(pinVerde,LOW);
    digitalWrite(pinAmarillo, LOW);
    digitalWrite(pinRojo,HIGH);
  }
   else if (lecturaLDR<100)
  {
    digitalWrite(pinVerde,HIGH);
    digitalWrite(pinAmarillo, LOW);
    digitalWrite(pinRojo,LOW);
  }
   else
  {
    digitalWrite(pinVerde,LOW);
    digitalWrite(pinAmarillo, HIGH);
    digitalWrite(pinRojo,LOW);
  }
}
