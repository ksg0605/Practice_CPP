/* 얕은 복사 생성자를 사용하여 프로그램이 비정상 종료되는 경우 */

#include<iostream>
#include<cstring>
using std::cout, std::cin, std::endl;

class Person{
  char *name;
  int id;
public:
  Person(int id, const char *name);
  ~Person();
  void changeName(const char *name);
  void show();
};

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

int main(){
  Person father(1, "Kitae");
  Person daughter(father);

  cout<<"daughter 객체 생성 직후 ----"<<endl;
  father.show();
  daughter.show();

  return 0;
}
