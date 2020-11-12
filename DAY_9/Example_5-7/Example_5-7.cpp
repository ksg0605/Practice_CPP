/*  참조 매개변수를 가진 함수 만들기 연습 */

#include<iostream>
using std::cout, std::cin, std::endl;

class Circle{
  int radius;
public:
  Circle();
  Circle(int radius);
  void setRadius(int radius);
  double getArea();
};

Circle::Circle(){
  radius = 1;
}

Circle::Circle(int radius){
  this->radius = radius;
}

void Circle::setRadius(int radius){
  this->radius = radius;
}

double Circle::getArea(){
  return 3.14*radius*radius;
}

void readRadius(Circle &c){
  int r;
  cout<<"정수 값으로 반지름을 입력하세요>>";
  cin>>r;
  c.setRadius(r);
}

int main(){
  Circle donut;
  readRadius(donut);
  cout<<"donut의 면적 = "<<donut.getArea()<<endl;
}