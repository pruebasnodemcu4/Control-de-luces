int luminosidad;
int valor;
byte rele = 6;

void setup() {
  Serial.begin (9600);
  pinMode (rele, OUTPUT);  
}

void loop() {
 valor = analogRead (A4);
 luminosidad = map(valor, 969, 49, 0, 100);
 Serial.print("Lectura: ");
 Serial.print(valor);
 Serial.print ("  Luminosidad: ");
 Serial.print (luminosidad);
 Serial.print ("%");
 Serial.println ();
  if(luminosidad == 0){
    analogWrite(rele,255);
    delay(100);
     }else{
    analogWrite(rele,0);}
  if(valor <=968 && valor >= 216){
    analogWrite(rele,123);
     }else{
    analogWrite(rele,0);}
}
