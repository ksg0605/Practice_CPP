#include  <iostream>

bool bigger(int a, int b, int &big)
{
  if(a - b > 0)
  {
    big = a;
    return false;
  }
  else if(a - b == 0)
  {
    big = a;
    return true;
  }
  else
  {
    big = b;
    return false;
  }
}

int main()
{
  int a, b, big;
  std::cout << "a를 입력하세요 >> ";
  std::cin >> a;
  std::cout << "b를 입력하세요 >> ";
  std::cin >> b;
  bigger(a, b, big);
  std::cout << "big 값 >> ";
  std::cout << big << std::endl;
} 