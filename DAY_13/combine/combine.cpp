#include  <iostream>
#include  <string>

void combine(std::string &a, std::string &b, std::string &c)
{
  //c = a.append(" ") + a.append(b);
  c = a + ' ' + b;
}

int main()
{
  std::string text1("I love you"), text2("very much");
  std::string text3;
  combine(text1, text2, text3);
  std::cout << text3 << std::endl;
}