#include  <iostream>

void half(double &n)
{
  n = n/2;
}

int main()
{
  double n = 20;
  half(n);
  std::cout << n << std::endl;
}