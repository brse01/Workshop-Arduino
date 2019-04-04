void setup() {
pinMode(13, OUTPUT); // Configura o pino 13 (led interno) como saída;
pinMode(8, INPUT_PULLUP); // Configura pino 8 como entrada e habilita pull up interno;
}
void loop() {
 if (digitalRead(8) == LOW) { // Botão Pressionado;
  digitalWrite(13, HIGH); // Liga led.
 }
 else { // Botão Não Pressionado
  digitalWrite(13, LOW); // Desliga led.
 }
}