const int RED = 11;
const int YELLOW = 10;
const int GREEN = 9;
int lights[3] = {GREEN, YELLOW,RED};
int step = 0;

void setup() {
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void change(){
  for(int i = 0; i < 3; i++){
    digitalWrite(lights[i], LOW);
  }
  digitalWrite(lights[step], HIGH);
}

void loop() {
  delay(5000); 
   change(); 
   step = (step + 1) % 3;
  }
