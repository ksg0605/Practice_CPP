#include<iostream>
#include"Exp.h"

int Exp::getValue(){
  for(int i = 0; i < getExp(); i++){
    a = a*a;
  }
  return a;
}

inline int Exp::getBase(){
  return a;
}

inline int Exp::getExp(){
  return b;
}


Exp::Exp(int a, int b){
  a = getBase();
  b = getExp();
}

Exp::Exp(int a){
  a = getBase();
  b = 1;
}

Exp::Exp(){
  a = 1;
  b = 1;
  a = getBase();
  b = getExp();
}

