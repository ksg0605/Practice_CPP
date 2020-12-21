/*
복사 생성자
매개 변수는 오직 하나이며 자기 클래스에 대한 참조로 선언된다.
클래스에 오직 하나만 선언할 수 있다. 
*/

#include  <iostream>

class Circle
{
  private:
    int radius;
  public:
    Circle(const Circle &c);
    Circle();
    Circle(int radius);
    double getArea();
};

Circle::Circle(const Circle &c)
{
  this->radius = c.radius;
  std::cout << "복사 생성자 실행 radius = " << radius << std::endl;
}

Circle::Circle()
{
  radius = 1;
}

Circle::Circle(int radius)
{
  this->radius = radius;
}

double Circle::getArea()
{
  return 3.14*radius*radius;
}

int main()
{
  Circle src(30);
  Circle dest(src);

  std::cout << "원본의 면적 = " << src.getArea() << std::endl;
  std::cout << "사본의 면적 = " << dest.getArea() << std::endl;
}
