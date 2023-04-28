/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Estrellita donde estas
   alumno: Jose Javier Juarez Rivera
   Carnet: 2022252
*/
int buzzer=3;

int trig=4;
int echo=5;
int tiempo;
int distancia;

 void setup(){
  pinMode(buzzer,OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
 }
 void loop(){
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  tiempo=pulseIn(echo, HIGH);
  distancia=tiempo/50.2;

  if ((distancia>5) && (distancia<10)){
    tone(buzzer,261.63);
    delay(500);
    Serial.print("Do:");
    Serial.println(distancia);
  }
  if ((distancia>11) && (distancia<15)){
    tone(buzzer,293.66);
    delay(500);
    Serial.print("Re:");
    Serial.println(distancia);
  }
  if ((distancia>16) && (distancia<20)){
    tone(buzzer,329.63);
    delay(500);
    Serial.print("Mi:");
    Serial.println(distancia);
  }
  if ((distancia>21) && (distancia<25)){
    tone(buzzer,349.23);
    delay(500);
    Serial.print("Fa:");
    Serial.println(distancia);
  }
   if ((distancia>26) && (distancia<30)){
    tone(buzzer,392);
    delay(500);
    Serial.print("Sol:");
    Serial.println(distancia);
  }
   if ((distancia>31) && (distancia<35)){
    tone(buzzer,440);
    delay(500);
    Serial.print("La:");
    Serial.println(distancia);
  }
   if ((distancia>36) && (distancia<40)){
    tone(buzzer,493.88);
    delay(500);
    Serial.print("Si:");
    Serial.println(distancia);
  }
   if ((distancia>41) && (distancia<45)){
    tone(buzzer,523.25);
    delay(500);
    Serial.print("Do:");
    Serial.println(distancia);
  }
   if ((distancia>46) && (distancia<50)){
    tone(buzzer,293.66);
    delay(500);
    Serial.print("Re:");
    Serial.println(distancia);
  }
   else{
     noTone(buzzer);
 }

}
