#include<iostream>
#include<string>
#include"Person.h"
using std::cout, std::cin, std::endl, std::string;

Person::Person(){
  
}

string Person::getName(){
  return name;
}

string Person::getTel(){
  return tel;
}

void Person::set(string name, string tel){
  this->name = name;
  this->tel = tel;
}