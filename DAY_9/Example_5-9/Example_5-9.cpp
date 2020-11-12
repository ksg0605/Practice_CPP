/* Circle 클래스의 복사 생성자와 객체 복사 */

#include<iostream>
using std::cout, std::cin, std::endl;

class Circle{
  int radius;
public:
  Circle(const Circle &c);  //복사 생성자 선언
  Circle();
  Circle(int radius);
  double getArea();
};

Circle::Circle(const Circle &c){
  this->radius = c.radius;
  cout<<"복사 생성자 실행 radius = "<<radius<<endl;
}

Circle::Circle(){
  radius = 1;
}

Circle::Circle(int radius){
  this->radius = radius;
}

double Circle::getArea(){
  return 3.14*radius*radius;
}

int main(){
  Circle src(30);
  Circle dest(src);

  cout<<"원본의 면적 = "<<src.getArea()<<endl;
  cout<<"사본의 면적 = "<<dest.getArea()<<endl;
}