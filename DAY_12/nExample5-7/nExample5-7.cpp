//참조 매개 변수를 가진 함수 만들기 연습
//키보드로부터 반지름 값을 읽어 Circle객체에 반지름을 설정하는 readRadius()함수를 작성하라.
#include  <iostream>

class Circle
{
private:
  int radius;
public:
  Circle();
  Circle(int radius);
  void setRadius(int radius);
  double getArea();
};

Circle::Circle()
{
  radius = 1;
}

Circle::Circle(int radius)
{
  this->radius = radius;
}

void Circle::setRadius(int radius)
{
  this->radius = radius;
}

double Circle::getArea()
{
  return 3.14*radius*radius;
}

void readRadius(Circle &c)
{ 
  int r;
  std::cout << "정수 값으로 반지름을 입력하세요>>";
  std::cin >> r;
  c.setRadius(r);
}

int main()
{
  Circle donut;
  readRadius(donut);
  std::cout << "donut의 면적 = " << donut.getArea() << std::endl;
}
