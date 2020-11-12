//객체 리턴
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

Circle getCircle(){
  Circle tmp(30);
  return tmp;
}

int main(){
  Circle c;
  cout<<c.getArea()<<endl;

  c = getCircle();
  cout<<c.getArea()<<endl;
}