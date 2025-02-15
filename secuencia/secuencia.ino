
int pins[5] = {7,8,9,10,11};

int step = 0;
int direction = 1;

void setup() {
  Serial.begin(9600);
  for(int i = 0; i < 5; i++){
    pinMode(pins[i], OUTPUT);
  }
}



void change(){
  for(int i = 0; i < 5; i++){
      digitalWrite(pins[i], LOW);
    
  }
      digitalWrite(pins[step], HIGH);
  next();
}

void next(){

  step +=  direction;

  if(step >= 4){
    direction = -1;
  }

  if(step <= 0){
    direction = 1;
  }

}

void loop() {
  delay(200); 
   change(); 
  }
