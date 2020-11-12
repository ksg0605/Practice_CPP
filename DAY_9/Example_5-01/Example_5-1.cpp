//값에 의한 호출(call by value) 시 매개 변수의 생성자 실행되지 않음
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
  cout<<"생성자 실행 radius = "<<radius << endl;
}

Circle::Circle(int r){
  radius = r;
  cout<<"생성자 실행 radius = "<<radius << endl;
}

Circle::~Circle(){
  cout<<"소멸자 실행 radius = "<<radius << endl;
}

double Circle::getArea(){
  return 3.14*radius*radius;
}

int Circle::getRadius(){
  return radius;
}

void Circle::setRadius(int r){
  radius = r;
}

void increase(Circle c){
  int r = c.getRadius();
  c.setRadius(r+1);
}

int main(){
  Circle waffle(30);
  increase(waffle);
  cout<<waffle.getRadius()<<endl;
}