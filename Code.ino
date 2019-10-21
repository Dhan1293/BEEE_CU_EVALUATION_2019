sant led1 = 8;
int led2 = 9;
int trigPin1 = 11;
int echoPin1 = 12;
int trigPin2 = 7;
int echoPin2 = 6;
int trigPin3 = 5;
int echoPin3 = 4;
int trigPin4 =2 ;
int echoPin4 = 1;
long cm1, cm2, cm3,cm4, duration1, duration2, duration3,duration4;



void setup()
{
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(led1, HIGH);
  digitalWrite(trigPin1, LOW);
  digitalWrite(trigPin1, HIGH);
  digitalWrite(trigPin1, LOW);
  pinMode(echoPin1, INPUT);
  duration1 = pulseIn(echoPin1, HIGH);
  cm1 = (duration1)*0.0342/2;
  
  
  if (cm1<50)
  {
    digitalWrite(led1, LOW);     
    digitalWrite(led2, HIGH); 
  }
  
  digitalWrite(trigPin2, LOW);
  digitalWrite(trigPin2, HIGH);
  digitalWrite(trigPin2, LOW);
  pinMode(echoPin2, INPUT);
  duration2 = pulseIn(echoPin2, HIGH);
  cm2 = (duration2)*0.0342/2;
  
   
  if (cm2<50)
  {
    digitalWrite(led1, LOW);     
    digitalWrite(led2, HIGH); 
  }
  
  
  digitalWrite(trigPin3, LOW);
  digitalWrite(trigPin3, HIGH);
  digitalWrite(trigPin3, LOW);
  pinMode(echoPin3, INPUT);
  duration3 = pulseIn(echoPin3, HIGH);
  cm3 = (duration3)*0.0342/2;
  
   
  if (cm3<50)
  {
    digitalWrite(led1, LOW);     
    digitalWrite(led2, HIGH); 
  }
  
  digitalWrite(trigPin4, LOW);
  digitalWrite(trigPin4, HIGH);
  digitalWrite(trigPin4, LOW);
  pinMode(echoPin4, INPUT);
  duration4 = pulseIn(echoPin4, HIGH);
  cm4 = (duration4)*0.0342/2;
  
  if (cm4<50)
  {
    digitalWrite(led1, LOW);     
    digitalWrite(led2, HIGH); 
  }

  
 
}
