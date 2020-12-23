//디폴트 매개 변수를 가진 함수 선언 및 호출
#include  <iostream>
#include  <string>

void star(int a = 5);
void msg(int id, std::string text="");

void star(int a)
{
  for(int i = 0; i < a; i++)
  {
    std::cout << '*';
  }
  std::cout << std::endl;
}

void msg(int id, std::string text)
{
  std::cout << id << ' ' << text << std::endl;
}

int main()
{
  star();
  star(10);

  msg(10);
  msg(10, "Hello");
}