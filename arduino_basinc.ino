int buzzerPin = 8;
int LDRPin = 0;
int basinc;
const  int arduLed1 = 4 ; //  Led 1
const  int arduLed2 = 5 ; //  Led 2
const  int arduLed3 = 6 ; //  Led 3
const  int arduLed4 = 7 ; //  Led 4

void setup () {     
  Serial.begin ( 9600 );
    // Ledlerin bir çıkış olarak tanımlanması
  pinMode (arduLed1, OUTPUT);
  pinMode (arduLed2, OUTPUT);
  pinMode (arduLed3, OUTPUT);
  pinMode (arduLed4, OUTPUT);
  pinMode (buzzerPin,OUTPUT);
}

void loop () {     
  basinc = analogRead ( 0 );
  Serial. println (basinc);                                           
  if (basinc > 100 );
    digitalWrite (arduLed1, HIGH); // Basınc 100'ü geçerse led 1 yanar.
    delay ( 1000 );  
  if (basinc > 200 );
  {  
    digitalWrite (arduLed1, HIGH);                   
    digitalWrite (arduLed2, HIGH);   // Basınc 200'ü geçerse led 2 yanar.
    delay ( 1000 ); 
  }                       
  if (basinc > 300 );
  {
    digitalWrite (arduLed1, HIGH);                   
    digitalWrite (arduLed2, HIGH); 
    digitalWrite (arduLed3, HIGH);   // Basınc 300'ü geçerse led 3 yanar ve buzzer pin devreye girer.
    digitalWrite (buzzerPin, HIGH);
    delay ( 1000 ); 
  }                        
  if (basinc > 400 );
  {
    digitalWrite (arduLed1, HIGH);                   
    digitalWrite (arduLed2, HIGH); 
    digitalWrite (arduLed3, HIGH);
    digitalWrite (arduLed4, HIGH);   // Basınc 400'ü geçerse led 4 yanar ve buzzer pin devreye girer.
    digitalWrite (buzzerPin, HIGH); 
    delay ( 1000 );  
  }
  if (basinc < 100 );  // Basınç verilmediğinde ise;
  {
    digitalWrite (arduLed1, LOW); 
    digitalWrite (arduLed2, LOW);
    digitalWrite (arduLed3, LOW);  // tüm ledler söner.
    digitalWrite (arduLed4, LOW);
    digitalWrite (buzzerPin,LOW);
    delay ( 1000 );  
  }  
    
}
