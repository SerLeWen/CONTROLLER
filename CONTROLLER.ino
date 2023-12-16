//Left Sensor(LSP) on digitalPin 2
//Right sensor (RSP) on digitalPin 3
//Left Motor connected to 4,5 digitalPins
//Right Motor connected to 10,9 digitalPins
int LMP = 8;
int LMN = 9;
int RMP = 6;
int RMN = 7;

void setup() {
  //Motor Pins are OUTPUT 
  pinMode(LMP, OUTPUT); 
  pinMode(LMN, OUTPUT); 
  pinMode(RMP, OUTPUT); 
  pinMode(RMN, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  if (Serial.available())
  {
    String Direction = Serial.readString();
    if (Direction == "F")
    { 
      //Move Forward 
      digitalWrite(LMP, HIGH); 
      digitalWrite(LMN, LOW); 
      digitalWrite(RMP, LOW); 
      digitalWrite(RMN, HIGH);
    }

    else if (Direction == "B")
    { 
      //Move backward 
      digitalWrite(LMP, LOW); 
      digitalWrite(LMN, HIGH);
      digitalWrite(RMP, HIGH); 
      digitalWrite(RMN, LOW); 
    }
    
    else if (Direction == "L")
    { 
      //Right Turn 
      digitalWrite(LMP, LOW); 
      digitalWrite(LMN, HIGH); 
      digitalWrite(RMP, LOW); 
      digitalWrite(RMN, HIGH);
    }

    else if (Direction == "R")
    {
      //Left Turn 
      digitalWrite(LMP, HIGH); 
      digitalWrite(LMN, LOW); 
      digitalWrite(RMP, HIGH); 
      digitalWrite(RMN, LOW);
    } 
    
    else if (Direction == "S")
    { 
      //Stop I 
      digitalWrite(LMP, LOW); 
      digitalWrite(LMN, LOW); 
      digitalWrite(RMP, LOW); 
      digitalWrite(RMN, LOW); 
    }
  }
}
