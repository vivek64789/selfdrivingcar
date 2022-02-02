
//const int EnableR = 5;
//const int HighR = 6; // these input pin of Left Side Motors
//const int LowR = 7;
//
//
//
//const int EnableL = 10;
//const int HighL = 8; // these input pin of Right Side Motors
//const int LowL = 9;


const int EnableL = 5;
const int HighL = 6; // these input pin of Left Side Motors
const int LowL = 7;



const int EnableR = 10;
const int HighR = 8; // these input pin of Right Side Motors
const int LowR = 9;



void setup() {
  pinMode(EnableL, OUTPUT);
  pinMode(HighL, OUTPUT);
  pinMode(LowL, OUTPUT);

  pinMode(EnableR, OUTPUT);
  pinMode(HighR, OUTPUT);
  pinMode(LowR, OUTPUT);

}

void Forward() {
  digitalWrite(HighL, LOW );
  digitalWrite(LowL, HIGH );
  analogWrite(EnableL, 255);


  digitalWrite(HighR, HIGH );
  digitalWrite(LowR, LOW );
  analogWrite(EnableR, 255);
}


void Backward() {
 digitalWrite(HighL, HIGH );
  digitalWrite(LowL, LOW );
  analogWrite(EnableL, 255);


  digitalWrite(HighR, LOW );
  digitalWrite(LowR, HIGH );
  analogWrite(EnableR, 255);
}

void Left1() {
  digitalWrite(HighL, LOW );
  digitalWrite(LowL, HIGH );
  analogWrite(EnableL, 100);


  digitalWrite(HighR, HIGH );
  digitalWrite(LowR, LOW );
  analogWrite(EnableR, 200);
}

void Left2() {
  digitalWrite(HighL, LOW );
  digitalWrite(LowL, HIGH );
  analogWrite(EnableL, 150);


  digitalWrite(HighR, HIGH );
  digitalWrite(LowR, LOW );
  analogWrite(EnableR, 255);
}

void Left3() {
  digitalWrite(HighL, LOW );
  digitalWrite(LowL, HIGH );
  analogWrite(EnableL, 80);


  digitalWrite(HighR, HIGH );
  digitalWrite(LowR, LOW );
  analogWrite(EnableR, 255);
}

void Right1() {
  digitalWrite(HighL, LOW );
  digitalWrite(LowL, HIGH );
  analogWrite(EnableL, 255);


  digitalWrite(HighR, HIGH );
  digitalWrite(LowR, LOW );
  analogWrite(EnableR, 200);
}

void Right2() {
  digitalWrite(HighL, LOW );
  digitalWrite(LowL, HIGH );
  analogWrite(EnableL, 255);


  digitalWrite(HighR, HIGH );
  digitalWrite(LowR, LOW );
  analogWrite(EnableR, 150);
}

void Right3() {
  digitalWrite(HighL, LOW );
  digitalWrite(LowL, HIGH );
  analogWrite(EnableL, 255);


  digitalWrite(HighR, HIGH );
  digitalWrite(LowR, LOW );
  analogWrite(EnableR, 80);
}



void loop() {

  Forward();
  delay(3000); 
  Left3();
  delay(3000);
  Right3();
  delay(3000);
  Forward();
  delay(1000); 
  Backward();

}
