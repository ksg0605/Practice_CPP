/*  참조에 의한 호출의 장점
    'call by address'는 포인터 타입으로 매개 변수를 선언하므로, 실수의 가능성과
    코드의 작성에 대한 긴장감이 배가 되고, 코드의 가독성이 떨아진다.
    참조매개변수를 사용하면 간단히 변수를 넘겨주기만 하면 되고, 함수 내에서도 참조 매개변수를
    보통 변수처럼 사용하기 떄문에 작성하기 쉽고 보기 좋은 코드가 된다. 
    -> 참조 매개변수로 이루어진 모든 연산은 원본 객체에 대한 연산이 된다.
    -> 참조 매개변수는 이름만 생성되므로, 생성자와 소멸자는 아예 실행되지 않는다. 
    참조에 의한 호출로 Circle 객체의 참조 전달  */

#include<iostream>
using std::cout, std::cin, std::endl;

class Circle{
  int radius;
public:
  Circle();
  Circle(int r);
  ~Circle();
  double getArea();
  int getRadius();
  void setRadius(int radius);
};

Circle::Circle(){
  radius = 1;
  cout<<"생성자 실행 radius = "<<radius<<endl;
}

Circle::Circle(int radius){
  this->radius = radius;
  cout<<"생성자 실행 radius = "<<radius<<endl;
}

Circle::~Circle(){
  cout<<"소멸자 실행 radius = "<<radius<<endl;
}

double Circle::getArea(){
  return 3.14*radius*radius;
}

int Circle::getRadius(){
  return radius;
}

void Circle::setRadius(int radius){
  this->radius = radius;
}

void increase(Circle &c){ //c는 참조 매개변수
  int r = c.getRadius();
  c.setRadius(r+1); //c가 참조하는 원본 객체의 반지름 1증가
}

int main(){
  Circle waffle(30);
  increase(waffle);
  cout<<waffle.getRadius()<<endl;
}


