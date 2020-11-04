#ifndef PERSON_H
#define PERSON_H
using std::string;

class Person{
  string name;
  string tel;
public:
  Person();
  string getName();
  string getTel();
  void set(string name, string tel);
};

#endif