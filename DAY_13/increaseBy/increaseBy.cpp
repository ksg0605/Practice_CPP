#include  <iostream>

class Circle
{
  private:
    int radius;
  public:
    Circle(int r);
    int getRadius();
    void setRadius(int r);
    void show();
};

Circle::Circle(int r)
{
  this->radius = r;
}

int Circle::getRadius()
{
  return radius;
}

void Circle::setRadius(int r)
{
  this->radius = r;
}

void Circle::show()
{
  std::cout << "반지름이 " << radius << "인 원" << std::endl;
}

void increaseBy(Circle &a, Circle &b)
{
  int r = a.getRadius() + b.getRadius();
  a.setRadius(r);
}

int main()
{
  Circle x(10), y(5);
  increaseBy(x, y);
  x.show();
}