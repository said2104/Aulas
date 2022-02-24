// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

int var;

void loop()
{
  var = digitalRead(2);
  digitalWrite(3, var);
  delay(10);
  digitalWrite(3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
