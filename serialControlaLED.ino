/*
Serial LED
Este codigo controla o estado do led no pino 13 utilizando a porta serial
 */
void setup(){
  Serial.begin(9600);
  //Configura o pino 13 do led como saida
  pinMode(13, OUTPUT);
  Serial.print("Digite o estado para o LED: ");
}

void loop (){
  if (Serial.available()) {

    //ler entrada serial como caractere inteiro
    char ser = Serial.read();
    //Mostra no console serial o valor lido
    Serial.print("Estado do LED: ");
    Serial.println(ser);
    Serial.print("Digite o estado para o LED: ");

    if(ser == '0' ){    
      digitalWrite(13, LOW);
     }
    if(ser == '1' ){    
      digitalWrite(13, HIGH);
     }
     delay(250);
  }
}
