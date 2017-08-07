int L3 = 2;
int R3 = 3;
int RB = 4;
//int LED = 9;
int cool = 0;
bool active = false;
bool oldOn = false;

void setup() {
  pinMode(L3, INPUT);
  pinMode(RB, INPUT);
  pinMode(R3, INPUT);
  //pinMode(LED, OUTPUT);
  //Serial.begin(9600);
  //pinMode(SYNC, INPUT);
}


void loop()
{
  //int lb = analogRead(RB);
  //Serial.println(lb);
  //digitalWrite(RB, HIGH);
  //delay(20);
  //digitalWrite(RB, LOW);
  //delay(100);
  //if (digitalRead(SYNC) == HIGH)


  int L3sig = analogRead(L3);
  //Serial.println(L3sig);
  
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
  //Serial.println(sig);

  //if (sig > 100 && sig != 0 && active == true)
  //{
    /*
    //analogWrite(SHOOT, sig);
    pinMode(RB, INPUT);
    */

/*
    pinMode(RB, OUTPUT);
    analogWrite(RB, 0);
    delay(20);
    //analogWrite(SHOOT, 255);
    pinMode(RB, INPUT);
    delay(108);
    */
    //digitalWrite(LED, HIGH);
    //delay(500);
    //digitalWrite(LED, LOW);
    //delay(500);
  //}


  //digitalWrite(power, HIGH);
  //if (sig > 50 || sig == 0 && active == true)
  //else if (sig < 25 && sig > 15 && sig != 0 && active == true)
  //{
    //Serial.println(sig);
    //Serial.println("cool");
    

  if (active == true)
  {
    pinMode(RB, OUTPUT);
    //digitalWrite(LED, HIGH);
    analogWrite(RB, 1000);
    delay(22);
    analogWrite(RB, 0);
    //digitalWrite(LED, LOW);
    pinMode(RB, INPUT);
    delay(100);
    
    
    //analogWrite(SHOOT, sig);
    //pinMode(RB, INPUT);
    //delay(50);
    
    //delay(50);
    cool++;
    //Serial.println(cool);
  }

  //}
  if (active == true)
  {
    int chicken = 4;
  }
  //else if (sig < 16 && sig != 0 && active == true)
  //else if (sig < 50 && sig != 0 && active == true)
  
  else if (active == false)
  {
    pinMode(RB, INPUT);
  }
  else if (sig > 150 || sig == 0 && active == false)
  {
    pinMode(RB, INPUT);
  }
}

