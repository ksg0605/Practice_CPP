//객체에 대한 참조
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

int main(){
  Circle circle;
  Circle &refc = circle;
  refc.setRadius(10);
  cout<<refc.getArea()<<" "<<circle.getArea();
}
