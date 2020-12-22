#include  <iostream>

class Circle
{
  private:
    int radius;
  public:
    Circle();
    Circle(int radius);
    void setRadius(int radius);
    int getRadius();
    void show();
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

int Circle::getRadius()
{
  return radius;
}

void Circle::show()
{
  std::cout << radius << std::endl;
}

void swap(Circle &circle1, Circle &circle2) //내부에서 Circle 객체 새로 생성하려니 오류니옴
{
  int tmp = circle1.getRadius();
  circle1.setRadius(circle2.getRadius());
  circle2.setRadius(tmp);
}

int main()
{
  Circle waffle(10);
  Circle donut(20);
  waffle.show();
  donut.show();
  swap(waffle, donut);
  waffle.show();
  donut.show();
}