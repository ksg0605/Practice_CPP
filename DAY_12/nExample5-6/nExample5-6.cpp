/*
참조에 의한 호출의 장점

간단히 변수를 넘겨주기만 하면 도고, 함수 내에서도 참조 매개변수를 보통 변수처럼 사용하기 떄문에 작성하기 쉽고 보기 좋은 코드가 됨
참조에 의한 호출로 객체 전달

값에 의한 호출로 객체를 매개 변수에 전달하면 다음 두 가지 사항에 유의해야 한다.
  1. 함수 내에서 매개변수 객체를 변경하여도, 원본 객체를 변경시키지 않는다.
  2. 매개 변수 객체의 생성자가 실행되지 않고 소멸자만 실헹되는 비대칭 구조로 작동한다.

참조에 의한 호출은 두가지 사항에 대해 완전히 다르게 작동한다.
  1. 참조 매개 변수로 이루어진 모든 연산은 원본 객체에 대한 연산이 된다.
  2. 참조 매개 변수는 이름만 생성되므로, 생성자와 소멸자는 아예 실행되지 않는다.  
*/

//참조에 의한 호출로 Circle 객체의 참조 전달
#include  <iostream>

class Circle  
{
private:
  int radius;
public:
  Circle();
  Circle(int radius);
  ~Circle();
  double getArea() { return 3.14*radius*radius; }
  int getRadius() { return radius; }
  void setRadius(int radius)  { this->radius = radius; }
};

Circle::Circle()
{
  radius = 1;
  std::cout << "생성자 실행 radius = " << radius << std::endl;
}

Circle::Circle(int radius)
{
  this->radius = radius;
  std::cout << "생성자 실행 radius = " << radius << std::endl; 
}

Circle::~Circle()
{
  std::cout << "소멸자 실행 radius " << radius << std::endl;
}

void increase(Circle &c)
{
  int r = c.getRadius();
  c.setRadius(r+1);
}

int main()
{
  Circle waffle(30);
  increase(waffle);
  std::cout << waffle.getRadius() << std::endl;
}
