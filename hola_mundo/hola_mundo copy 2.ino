// Programa Hola Mundo para Arduino
// Define el pin del LED integrado
const int LED_PIN = LED_BUILTIN;

void setup() {
  // Inicializa la comunicación serial
  Serial.begin(9600);
  // Configura el pin del LED como salida
  pinMode(LED_PIN, OUTPUT);
  
  // Imprime el mensaje inicial
  Serial.println("¡Hola Mundo!");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // Enciende el LED
  Serial.println("LED Encendido");
  delay(1000);                   // Espera 1 segundo
  
  digitalWrite(LED_PIN, LOW);    // Apaga el LED
  Serial.println("LED Apagado");
  delay(1000);                   // Espera 1 segundo
}
