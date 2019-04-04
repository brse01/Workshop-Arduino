/*
Hello Arduino
Este codigo envia para a serial o texto "Hello, arduino!" em intervalo de dois segundos
 */

// A rotina de setup executa na inicializacao, ao apertar o botao reset:
void setup() {
  // inicializa a comunicacao serial a 9600 bits por segundo:
  Serial.begin(9600);
}

// A rotina loop executa enquanto o arduino estiver ligado, para sempre, até ser desligado:
void loop() {
  Serial.println("Hello, arduino!");
  delay(2000);
}