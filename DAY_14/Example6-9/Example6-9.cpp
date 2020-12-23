//디폴트 매개 변수로 인한 함수 중복의 모호성
#include  <iostream>
#include  <string>

void msg(int id)
{
  std::cout << id << std::endl;
}

void msg(int id, std::string s = "")
{
  std::cout << id << ":" << s << std::endl;
}

int main()
{
  msg(5, "Good Morning");
  //msg(6);
}