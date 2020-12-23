//대폴트 매개 변수를 가진 함수 만들기 연습
#include  <iostream>

void f(char c=' ', int line = 1);

void f(char c, int line)
{
  for(int i = 0; i < line; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      std::cout << c;
    }
    std::cout << std::endl;
  }
}
int main()
{
  f();
  f('%');
  f('@', 5);
}