bool a;
bool b;
bool c;
bool d;
bool e;
bool f;
bool g;

#include <LogicGates.h>

void setup() {
  Serial.begin(9600);
  a=NotGate(true);
  Serial.println(a);
  b=AndGate(true,true);
  Serial.println(b);
  c=NandGate(true,true);
  Serial.println(c);
  d=OrGate(true,true);
  Serial.println(d);
  e=NorGate(true,true);
  Serial.println(e);
  f=XorGate(true,true);
  Serial.println(f);
  g=XnorGate(true,true);
  Serial.println(g);
}

void loop() {
}
