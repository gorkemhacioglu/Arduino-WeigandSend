int data0 = 2;
int data1 = 3;

void setup()
{
  pinMode(data0, OUTPUT);
  
  pinMode(data1, OUTPUT);
  
  digitalWrite(data0, HIGH);
  
  digitalWrite(data1, HIGH);
}

void loop()
{
  String binaryValue = "1110101001010101010101010101010101010"; // 37 Bit Data

  for(int i=0;i<binaryValue.length();i++)
  {
    SendWiegand(binaryValue.charAt(i));
  }
}

void SendWiegand(char b)
{   
  int grk = data0;
  
  if(b == '1')
  {    
    grk = data1;
  }
  
  digitalWrite(grk, LOW);
  
  delayMicroseconds(80);
  
  digitalWrite(grk, HIGH);
  
  delayMicroseconds(240);
}
