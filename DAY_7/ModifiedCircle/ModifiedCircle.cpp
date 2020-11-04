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
  int radius;
  int circlesNum;
  int count = 0;
  Circle *circles = new Circle[circlesNum];
  cout<<"원의 개수 >>";
  cin>>circlesNum;
  for(int i=0; i<circlesNum; i++){
    cout<<"원 "<<i+1<<"의 반지름 >>";
    cin>>radius;
    circles[i].setRadius(radius);
    if(circles[i].getArea()>100){
      count++;
    }
    cout<<circles[i].getArea()<<endl;
  }
  cout<<"면적이 100보다 큰 원은 "<<count<<"개 입니다"<<endl;
}

