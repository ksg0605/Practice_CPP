/*
묵시적 복사 생성
디폴트 복사 생성자가 실행되어 프로그램이 비정상 종료하는 경우가 있어 가능하면 싶은 복사 생성자를 구현해야 함
묵시적 복사 생성의 경우는 3가지로서, 컴파일러가 복사 생성자를 자동으로 호출하는 경우이다.

1. 객체로 초기화하여 객체가 생성될 떄
  Person son = father;
  -> Person son(father);

2. 값에 의한 호출로 객체가 전달될 때
  값에 의한 호출로 객체가 전달되면, 함수의 매개 변수 객체가 생성될 때, 복사 생성자가 자동으로 호출된다.
  void f(Person person)
  {
    ....
  }
  Person father(1, "Kitae");
  f(father);

3. 함수가 객체를 리턴할 떄
  Person g()
  {
    Person mother(2, "Jane");
    return mother;
  }
  g();
*/

//묵시적 복사 생성에 의해 복사 생성자가 자동으로 호출되는 경우
//얕은 복사 생성자를 사용하여 프로그램이 비정상 종료되는 경우
#include  <iostream>
#include  <cstring>

class Person
{
  private:
    char *name;
    int id;
  public:
    Person(int id, const char *name);
    Person(const Person &Person);
    ~Person();
    void changeName(const char *name);
    void show();
};

Person::Person(int id, const char *name)
{
  this->id = id;
  int len = strlen(name);
  this->name = new char [len+1];
  strcpy(this->name, name);
}

Person::Person(const Person &person)
{
  this->id = person.id;
  int len = strlen(person.name);
  this->name = new char [len+1];
  strcpy(this->name , person.name);
  std::cout << "복사 생성자 생성, 원본 객체의 이름 " << this->name <<std::endl;
}

Person::~Person()
{
  if(name)
    delete [] name;
}

void Person::changeName(const char *name)
{
  if(strlen(name) > strlen(this->name))
  {
    return;
  }
  strcpy(this->name, name);
}

void Person::show()
{
  std::cout << id << ',' << name << std::endl;
}

void f(Person person)
{
  person.changeName("dummy");
}

Person g()
{
  Person mother(2, "Jane");
  return mother;
}

int main()
{
  Person father(1, "Kitae");
  Person daughter(father);
  Person son = father;
  f(father);
  g();

  std::cout << "daughter 객체 생성 직후 ----" << std::endl;

  father.show();
  daughter.show();

  daughter.changeName("Grace");
  std::cout << "daughter 이름을 Grace로 바꾼 후 ----" << std::endl;
  father.show();
  daughter.show();

  return 0;
}
