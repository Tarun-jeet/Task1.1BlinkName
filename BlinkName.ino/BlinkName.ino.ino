int delayTime = 2000;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(3,OUTPUT);
}

//a procedure for the dash part of the code where led blink for long time
void dash()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1500);
  digitalWrite(LED_BUILTIN,LOW);
  delay(500);
}

//a procedure for dot part of morse code where led blink for short time
void dot()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN,LOW);
  delay(500);
}

//procedure containing a switch case statement for the modularity
//so that the name in the main code can be easily updated 
//here cases are made for different alphabets according to their morse code
void blinkCode(char alphabet)
{
  switch(alphabet)
  {
    case 'a':
    dot();
    dash();
    break;
    
    case 'b':
    dash();
    dot();
    dot();
    dot();
    break;
    
    case 'c':
    dash();
    dot();
    dash();
    dot();
    break;
    
    case 'd':
    dash();
    dot();
    dot();
    break;
    
    case 'e':
    dot();
    break;
    
    case 'f':
    dot();
    dot();
    dash();
    dot();
    break;
    
    case 'g':
    dash();
    dash();
    dot();
    break;
    
    case 'h':
    dot();
    dot();
    dot();
    dot();
    break;
    
    case 'i':
    dot();
    dot();
    break;
    
    case 'j':
    dot();
    dash();
    dash();
    dash();
    break;
    
    case 'k':
    dash();
    dot();
    dash();
    break;
    
    case 'l':
    dot();
    dash();
    dot();
    dot();
    break;
    
    case 'm':
    dash();
    dash();
    break;
    
    case 'n':
    dash();
    dot();
    break;
    
    case 'o':
    dash();
    dash();
    dash();
    break;
    
    case 'p':
    dot();
    dash();
    dash();
    dot();
    break;
    
    case 'q':
    dash();
    dash();
    dot();
    dash();
    break;
    
    case 'r':
    dot();
    dash();
    dot();
    break;
    
    case 's':
    dot();
    dot();
    dot();
    break;
    
    case 't':
    dash();
    break;
    
    case 'u':
    dot();
    dot();
    dash();
    break;
    
    case 'v':
    dot();
    dot();
    dot();
    dash();
    break;
    
    case 'w':
    dot();
    dash();
    dash();
    break;
    
    case 'x':
    dash();
    dot();
    dot();
    dash();
    break;
    
    case 'y':
    dash();
    dot();
    dash();
    dash();
    break;
    
    case 'z':
    dash();
    dash();
    dot();
    dot();
    break;
  }
}
void loop()
{
  //my name TARUNJEET with morse code
  //if the push button si pressed then the LED will start blinking morse code
  if(digitalRead(3)==HIGH)
  {
    //T
  blinkCode('t');
  delay(delayTime);
  //A
  blinkCode('a');
  delay(delayTime);
  //R
  blinkCode('r');
  delay(delayTime);
  //U
  blinkCode('u');
  delay(delayTime);
  //N
  blinkCode('n');
  delay(delayTime);
  //J
  blinkCode('j');
  delay(delayTime);
  //E
  blinkCode('e');
  delay(delayTime);
  //E
  blinkCode('e');
  delay(delayTime);
  //T
  blinkCode('t');
  delay(5000);
  }
  //else it will be low
  else
  {
    digitalWrite(LED_BUILTIN,LOW);
  }
  
}
