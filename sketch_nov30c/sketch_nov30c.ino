
int BlancoA=2;
int BlancoR=3;
int AzulA=5;
int AzulR=4;

int SAzul;
int SBlanco; // sensor blanco //

void setup() {
  // put your setup code here, to run once:
    pinMode ( BlancoA, OUTPUT);
    pinMode ( BlancoR; OUTPUT);
    pinMode ( AzulA, OUTPUT);
    pinMode ( AzulR, OUTPUT);
    Serial.begin(9600);

}

void loop() {
  // Si hay funciones que no cumplen funciones vitales ( como las del monitor serial en este caso), sacarlas
  // para ahorrar espacio de memorias y mejorar velocidad de programa //
  // put your main code here, to run repeatedly:
    SBlanco=digitalRead(8);
    SAzul=analogRead(A4);

    Serial.print(" Blanco ");
    Serial.print (SBlanco);
    Serial.print(" Azul ");
    Serial.println (SAzul);

    if (SBlanco == 0 && SAzul > 250){
      Adelante();
    }
    if (SBlanco == 1 ){
      Girar_azul();
    }
    if (SAzul < 250 ){
      Girar_blanco();
    }
    if (SBlanco == 1 && SAzul < 250){
      Atras();
    }

}

void Adelante (){
 digitalWrite(BlancoA, HIGH);
 digitalWrite(BlancoR, LOW);
 digitalWrite(AzulA, HIGH);
 digitalWrite(AzulR, LOW);

 }

 void Atras (){
 digitalWrite(BlancoA, LOW);
 digitalWrite(BlancoR, HIGH);
 digitalWrite(AzulA, LOW);
 digitalWrite(AzulR, HIGH);

 }

void Girar_azul (){
 digitalWrite(BlancoA, HIGH)
 digitalWrite(BlancoR, LOW);
 digitalWrite(AzulA, LOW);
 digitalWrite(AzulR, HIGH);

}

 void Girar_blanco(){
 digitalWrite(BlancoA, LOW)
 digitalWrite(BlancoR, HIGH);
 digitalWrite(AzulA, HIGH);
 digitalWrite(AzulR, LOW);

 }

 void Quieto (){
 digitalWrite(BlancoA, LOW)
 digitalWrite(BlancoR, LOW);
 digitalWrite(AzulA, LOW);
 digitalWrite(AzulR, LOW);

 }

