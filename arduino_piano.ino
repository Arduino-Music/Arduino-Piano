const int C = 2;
const int Db = 3;
const int D = 4;
const int Eb = 5;
const int E = 6;
const int F = 7;
const int Gb = 8;
const int G = 9;
const int Ab = 10;
const int A = 11;
const int Bb = 12;
const int B = 13;

const int piezo1 = A0;
const int piezo2 = A1;
const int piezo3 = A2;

void setup()
{
  pinMode(C, INPUT);
  pinMode(Db, INPUT);
  pinMode(D, INPUT);
  pinMode(Eb, INPUT);
  pinMode(E, INPUT);
  pinMode(F, INPUT);
  pinMode(Gb, INPUT);
  pinMode(G, INPUT);
  pinMode(Ab, INPUT);
  pinMode(A, INPUT);
  pinMode(Bb, INPUT);
  pinMode(B, INPUT);
  
  pinMode(piezo1, OUTPUT);
  pinMode(piezo2, OUTPUT);
  pinMode(piezo3, OUTPUT);
  
}

void loop()
{
  if(digitalRead(C) == 1)
  {
    tone(piezo1, 261, 25);
  }
  if(digitalRead(Db) == 1)
  {
   	tone(piezo1, 277, 25);
  }
  if(digitalRead(D) == 1)
  {
    tone(piezo1, 293, 25);
  }
  if(digitalRead(Eb) == 1)
  {
    tone(piezo1, 311, 25);
  }
  
  
  if(digitalRead(E) == 1)
  {
    tone(piezo2, 329, 25);
  }
  if(digitalRead(F) == 1)
  {
   	tone(piezo2, 349, 25);
  }
  if(digitalRead(Gb) == 1)
  {
    tone(piezo2, 369, 25);
  }
  if(digitalRead(G) == 1)
  {
    tone(piezo2, 392, 25);
  }
  
  
  if(digitalRead(Ab) == 1)
  {
    tone(piezo3, 415, 25);
  }
  if(digitalRead(A) == 1)
  {
   	tone(piezo3, 440, 25);
  }
  if(digitalRead(Bb) == 1)
  {
    tone(piezo3, 466, 25);
  }
  if(digitalRead(B) == 1)
  {
    tone(piezo3, 493, 25);
  }
  
  
  
  //Major chords
  //C major
  if(digitalRead(C) == 1 && digitalRead(E) == 1 && digitalRead(G) == 1)
  {
    tone(piezo1, 261, 25);
    tone(piezo2, 329, 25);
    tone(piezo3, 392, 25);
  }
  //C# major
  if(digitalRead(Db) == 1 && digitalRead(F) == 1 && digitalRead(Ab) == 1)
  {
    tone(piezo1, 277, 25);
    tone(piezo2, 349, 25);
    tone(piezo3, 415, 25);
  }
  //D major
  if(digitalRead(D) == 1 && digitalRead(Gb) == 1 && digitalRead(A) == 1)
  {
    tone(piezo1, 293, 25);
    tone(piezo2, 369, 25);
    tone(piezo3, 440, 25);
  }
  //Eb major
  if(digitalRead(Eb) == 1 && digitalRead(G) == 1 && digitalRead(Bb) == 1)
  {
    tone(piezo1, 311, 25);
    tone(piezo2, 392, 25);
    tone(piezo3, 466, 25);
  }
  //E major
  if(digitalRead(E) == 1 && digitalRead(Ab) == 1 && digitalRead(B) == 1)
  {
    tone(piezo1, 329, 25);
    tone(piezo2, 415, 25);
    tone(piezo3, 493, 25);
  }
  //F major
  if(digitalRead(F) == 1 && digitalRead(A) == 1 && digitalRead(C) == 1)
  {
    tone(piezo1, 349, 25);
    tone(piezo2, 440, 25);
    tone(piezo3, 261, 25);
  }
  //Gb major
  if(digitalRead(Gb) == 1 && digitalRead(Bb) == 1 && digitalRead(Db) == 1)
  {
    tone(piezo1, 369, 25);
    tone(piezo2, 466, 25);
    tone(piezo3, 277, 25);
  }
  //G major
  if(digitalRead(G) == 1 && digitalRead(B) == 1 && digitalRead(D) == 1)
  {
    tone(piezo1, 392, 25);
    tone(piezo2, 493, 25);
    tone(piezo3, 293, 25);
  }
  //Ab major
  if(digitalRead(Ab) == 1 && digitalRead(C) == 1 && digitalRead(Eb) == 1)
  {
    tone(piezo1, 415, 25);
    tone(piezo2, 261, 25);
    tone(piezo3, 311, 25);
  }
  //A major
  if(digitalRead(A) == 1 && digitalRead(Db) == 1 && digitalRead(E) == 1)
  {
    tone(piezo1, 440, 25);
    tone(piezo2, 277, 25);
    tone(piezo3, 329, 25);
  }
  //Bb major
  if(digitalRead(Bb) == 1 && digitalRead(D) == 1 && digitalRead(F) == 1)
  {
    tone(piezo1, 466, 25);
    tone(piezo2, 293, 25);
    tone(piezo3, 349, 25);
  }
  //B major
  if(digitalRead(B) == 1 && digitalRead(Eb) == 1 && digitalRead(Gb) == 1)
  {
    tone(piezo1, 493, 25);
    tone(piezo2, 311, 25);
    tone(piezo3, 369, 25);
  }
  
  
  
  
  //Minor chords
  //C minor
  if(digitalRead(C) == 1 && digitalRead(Eb) == 1 && digitalRead(G) == 1)
  {
    tone(piezo1, 261, 25);
    tone(piezo2, 311, 25);
    tone(piezo3, 392, 25);
  }
  //C# minor
  if(digitalRead(Db) == 1 && digitalRead(E) == 1 && digitalRead(Ab) == 1)
  {
    tone(piezo1, 277, 25);
    tone(piezo2, 329, 25);
    tone(piezo3, 415, 25);
  }
  //D minor
  if(digitalRead(D) == 1 && digitalRead(F) == 1 && digitalRead(A) == 1)
  {
    tone(piezo1, 293, 25);
    tone(piezo2, 349, 25);
    tone(piezo3, 440, 25);
  }
  //Eb minor
  if(digitalRead(Eb) == 1 && digitalRead(Gb) == 1 && digitalRead(Bb) == 1)
  {
    tone(piezo1, 311, 25);
    tone(piezo2, 369, 25);
    tone(piezo3, 466, 25);
  }
  //E minor
  if(digitalRead(E) == 1 && digitalRead(G) == 1 && digitalRead(B) == 1)
  {
    tone(piezo1, 329, 25);
    tone(piezo2, 392, 25);
    tone(piezo3, 493, 25);
  }
  //F minor
  if(digitalRead(F) == 1 && digitalRead(Ab) == 1 && digitalRead(C) == 1)
  {
    tone(piezo1, 349, 25);
    tone(piezo2, 415, 25);
    tone(piezo3, 261, 25);
  }
  //Gb minor
  if(digitalRead(Gb) == 1 && digitalRead(A) == 1 && digitalRead(Db) == 1)
  {
    tone(piezo1, 369, 25);
    tone(piezo2, 440, 25);
    tone(piezo3, 277, 25);
  }
  //G minor
  if(digitalRead(G) == 1 && digitalRead(Bb) == 1 && digitalRead(D) == 1)
  {
    tone(piezo1, 392, 25);
    tone(piezo2, 466, 25);
    tone(piezo3, 293, 25);
  }
  //Ab minor
  if(digitalRead(Ab) == 1 && digitalRead(B) == 1 && digitalRead(Eb) == 1)
  {
    tone(piezo1, 415, 25);
    tone(piezo2, 493, 25);
    tone(piezo3, 311, 25);
  }
  //A minor
  if(digitalRead(A) == 1 && digitalRead(C) == 1 && digitalRead(E) == 1)
  {
    tone(piezo1, 440, 25);
    tone(piezo2, 261, 25);
    tone(piezo3, 329, 25);
  }
  //Bb minor
  if(digitalRead(Bb) == 1 && digitalRead(Db) == 1 && digitalRead(F) == 1)
  {
    tone(piezo1, 466, 25);
    tone(piezo2, 277, 25);
    tone(piezo3, 349, 25);
  }
  //B minor
  if(digitalRead(B) == 1 && digitalRead(D) == 1 && digitalRead(Gb) == 1)
  {
    tone(piezo1, 493, 25);
    tone(piezo2, 293, 25);
    tone(piezo3, 369, 25);
  }


  
}