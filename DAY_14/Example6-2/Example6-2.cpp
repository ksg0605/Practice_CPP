//sum() 함수 중복 연습
#include  <iostream>

int sum(int a, int b)
{
  int s = 0;
  for(int i = a; i <= b ; i++)
  {
    s += i;
  }
  return s;
}

int sum(int a)
{
  int s = 0;
  for(int i = 0; i <= a; i++)
  {
    s += i;
  }
  return s;
}

int main()
{
  std::cout << sum(3, 5) << std::endl;
  std::cout << sum(3) << std::endl;
  std::cout << sum(100) << std::endl;
}