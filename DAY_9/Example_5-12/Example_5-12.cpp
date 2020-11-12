/* 묵시적 복사 생성에 의해 복사 생성자가 자동 호출되는 경우 */

#include<iostream>
#include<cstring>
using std::cout, std::cin, std::endl;

class Person{
  char *name;
  int id;
public:
  Person(const Person &p);
  Person(int id, const char *name);
  ~Person();
  void changeName(const char *name);
  void show();
};

Person::Person(const Person &person){
  cout<<"복사 생성자 실행>>"<<endl;
  this->id = person.id;
  int len = strlen(person.name);
  this->name = new char [len+1];
  strcpy(this->name, person.name);
}

Person::Person(int id, const char *name){
  this->id = id;
  int len = strlen(name);
  this->name = new char [len+1];
  strcpy(this->name, name);
}

Person::~Person(){
  if(name)
    delete [] name;
}

void Person::changeName(const char *name){
  if(strlen(name) > strlen(this->name))
    return; //현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
  strcpy(this->name, name);  
}

void Person::show(){
  cout<<id<<','<<name<<endl;
}

void f(Person person){
  person.changeName("dummy");
}

Person g(){
  Person mother(2, "Jane");
  return mother;
}

int main(){
  Person father(1, "Kitae");
  Person son = father;
  f(father);
  g();
}
