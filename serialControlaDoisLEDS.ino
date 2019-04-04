/*
Serial LED
Este codigo controla o estado do led no pino 13 utilizando a porta serial
 */
int ledVerde = 11;
int ledVermelho = 12;
char serVermelho = '0';
char serVerde = '0';
void setup(){
  Serial.begin(9600);
  //Configura os pinos 11 e 12 do led como saida
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.print("Estado do LED Vermelho: ");
  Serial.println(serVermelho);
  Serial.print("Estado do LED Verde: ");
  Serial.println(serVerde);
  Serial.println("Digite o estado para os LEDs: ");
}

void loop (){
  if (Serial.available()) {
    char ser = Serial.read();

    if(ser == '0' ){   
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW);
      serVermelho = '0';
      serVerde = '0';
    }
    if(ser == '1'){
      digitalWrite(11, HIGH); 
      digitalWrite(12, LOW);
      serVermelho = '1';      
      serVerde = '0';
    }
    if(ser == '2'){
      digitalWrite(11, LOW); 
      digitalWrite(12, HIGH);
      serVermelho = '0';      
      serVerde = '1';
    }
    if(ser == '3' ){   
      digitalWrite(11, HIGH); 
      digitalWrite(12, HIGH);
      serVermelho = '1';
      serVerde = '1';
    }
    
   // Serial.print("Estado do LED Vermelho: ");
    //Serial.println(serVermelho);
    //Serial.print("Estado do LED Verde: ");
    //Serial.println(serVerde);
    //Serial.println("Digite o estado para os LEDs: ");
  }

}
