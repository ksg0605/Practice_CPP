#include<iostream>
using namespace std;

struct StructCircle{
private:
  int radius;
public:
  StructCircle(int r){
    radius = r;
  }
  double getArea();
};

double StructCircle::getArea(){
  return 3.14*radius*radius;
}

int main(){
  StructCircle waffle(3);
  cout<<"면적은 "<<waffle.getArea();
}