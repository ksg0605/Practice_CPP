#include<iostream>
#include<string>
using std::cout, std::cin, std::endl, std::string;

class Person{
  string name;
public:
  Person(){};
  Person(string name);
  string getName();
  void setName(string name);
};

class Family{
  Person *p;
  int size;
  string name;
public:
  Family(string name, int size);
  void setName(int number, string  name);
  void show();
  ~Family();
};

Person::Person(string name){
  this->name = name;
}

string Person::getName(){
  return name;
}

Family::Family(string name, int size){
  p = new Person[size];
  this->size = size;
  this->name = name;
}

void Family::show(){
  cout<<name<<"가족은 다음과 같이 "<<size<<"명 입니다.\n";
  for(int i=0;i<size; i++){
    cout<<p[i].getName()<<'\t';
  }
}

Family::~Family(){
  delete [] p;
}

int main(){
  Family *simpson = new Family("simpson", 3);
  simpson->setName(0, "Mr. Simpson");
}