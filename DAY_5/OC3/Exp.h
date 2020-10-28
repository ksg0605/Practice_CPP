#ifndef EXP_H
#define EXP_H

class Exp{
  int a, b;
public:
  int getValue();
  int getBase();
  int getExp();
  Exp(int a, int b);
  Exp(int a);
  Exp();
};

#endif