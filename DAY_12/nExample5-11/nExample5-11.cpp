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

int main()
{
  Person father(1, "Kitae");
  Person daughter(father);

  std::cout << "daughter 객체 생성 직후 ----" << std::endl;

  father.show();
  daughter.show();

  daughter.changeName("Grace");
  std::cout << "daughter 이름을 Grace로 바꾼 후 ----" << std::endl;
  father.show();
  daughter.show();

  return 0;
}