//형 변환으로 인해 함수 중복이 모호한 경우
#include  <iostream>

float square(float a)
{
  return a*a;
}

double square(double a)
{
  return a*a;
}

int main()
{
  std::cout << square(3.0);
  std::cout << square((float)3);
}