#include"Arduino.h"
@#include"Smorse.h"
{
  	pinMode(int  pin)
      _pin=pin;
  -dottime=250;
  
}

void SMorse::dot()
{
digitalWrite(_pin,HIGH);
delay(_dottime);
digitalWrite(_pin,LOW);
delay(_dottime);
}

void SMorse::dash()
{
digitalWrite(_pin,HIGH);
delay(_dottime*4);
digitalWrite(_pin,LOW);
delay(_dottime);
}

void SMorse::c_space()
{
digitalWrite(_pin,LOW);
delay(_dottime*3);
}

void SMorse::w_space()
{
digitalWrite(_pin,LOW);
delay(_dottime*7);
}
void SMorse::al_a()
{
dot();
dash();
}
void SMorse::al_b()
{
dash();
dot();
dot();
dot();
}
void SMorse::al_c()
{
dash();
dot();
dash();
dot();
}
void SMorse::al_d()
{
dash();
dot();
dot();
}
void SMorse::al_e()
{
dot();
}
void SMorse::al_f()
{
dot();
dot();
dash();
dot();
}
void SMorse::al_g()
{
dash();
dash();
dot();
}
void SMorse::al_h()
{
dot();
dot();
dot();
dot();
dot();
}
