#define in1 4
#define in2 5
#define en1 6

#define in3 7
#define in4 8
#define en2 9

int c;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(en1,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(en2,OUTPUT);
  digitalWrite(en1,HIGH);
  digitalWrite(en2,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  //while(Serial.available()==0)
  //  delay(1);
  c=Serial.parseInt();
  Serial.println(c);
  
  switch(c)
  {
    case 1:
      digitalWrite(in1,HIGH);   //FORWARD
      digitalWrite(in2,LOW);
      digitalWrite(in3,LOW);
      digitalWrite(in4,HIGH);
      break;
    case 2:
      digitalWrite(in1,LOW);//LEFT
      digitalWrite(in2,LOW);
      digitalWrite(in3,LOW);
      digitalWrite(in4,HIGH);
      break;
    case 3:
      digitalWrite(in1,HIGH);//RIGHT 
      digitalWrite(in2,LOW);
      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);
      break;  
    case 4:
      digitalWrite(in1,LOW);//BACK 
      digitalWrite(in2,HIGH);  
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);
      break;
    case 5:
      digitalWrite(in1,LOW);//STOP
      digitalWrite(in2,LOW);
      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);
      break;  
  }
}
