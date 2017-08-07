int L3 = A0;
int R3 = A1;
int RB = A3;
int LED = 9;
int cool = 0;
bool active = false;
bool oldOn = false;

void setup() {
  pinMode(L3, INPUT);
  pinMode(RB, INPUT);
  pinMode(R3, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}


void loop()
{


  int L3sig = analogRead(L3);
  Serial.println(L3sig);
  
  if (analogRead(L3) < 50 && analogRead(R3) < 50)
  {
    if (oldOn == false)
    {
      if (active == false)
      {
        active = true;
      }
      else
      {
        active = false;
      }
      oldOn = true;
      delay(500);
    }
  }
  else
  {
    oldOn = false;
  }
  
  
  pinMode(RB, INPUT);
  int sig = analogRead(RB);

    

  if (active == true)
  {
    pinMode(RB, OUTPUT);
    digitalWrite(LED, HIGH);
    analogWrite(RB, 1000);
    delay(22);
    analogWrite(RB, 0);
    digitalWrite(LED, LOW);
    pinMode(RB, INPUT);
    delay(100);

  }

  if (active == true)
  {
    int chicken = 4;
  }

  
  else if (active == false)
  {
    pinMode(RB, INPUT);
  }
  else if (sig > 150 || sig == 0 && active == false)
  {
    pinMode(RB, INPUT);
  }
}
