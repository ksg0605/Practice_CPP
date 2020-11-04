#include<iostream>
#include<string>
using std::cout, std::cin, std::endl, std::string;

class Circle{
  int radius;//원의 이름 값
  string name;//원의 이름
public:
  void setCircle(string name, int radius);//이름과 반지름 생성
  double getArea();//원의 넓이 리턴
  string getName();//원의 이름 리턴
};

class CircleManager{
  Circle *p;//circle배열에 대한 포인터
  int size;//배열의 크기
  string name;
  int radius;
public:
  CircleManager(int size);//size크기의 배열을 동적 생성, 사용자로부터 입력 완료
  ~CircleManager();//소멸자
  void searchByName();//사용자로부터 원의 이름을 입력받아 면적 출력
  void searchByArea();//사용자로부터 면적을 입력박아 면적보다 큰 원의 이름 출력
};

void Circle::setCircle(string name, int radius){
  this->name = name;
  this->radius = radius;
}

double Circle::getArea(){
  return 3.14*radius*radius;
}

string Circle::getName(){
  return name;
}

CircleManager::CircleManager(int size){
  p = new Circle[size];
  this->size = size;
  for(int i=0; i<size; i++){
    cout<<"원 "<<i+1<<"의 이름과 반지름 >>";
    cin>>name>>radius;
    p[i].setCircle(name, radius);
  }
}

CircleManager::~CircleManager(){
  delete p;
}

void CircleManager::searchByName(){
  string search;
  cout<<"검색하고자 하는 원의 이름 >>";
  cin>>search;
  for(int i=0; i<size; i++){
    if(search ==p[i].getName())
      cout<<p[i].getName()<<"의 면적은 "<<p[i].getArea()<<endl;
  }
  cout<<endl;
}

void CircleManager::searchByArea(){
  double area;
  cout<<"최소 면적을 정수로 입력하세요 >>";
  cin>>area;
  for(int i=0; i<size; i++){
    if(area < p[i].getArea())
      cout<<p[i].getName()<<"의 면적은 "<<p[i].getArea();
  }
  cout<<endl;
}

int main(){
  int size;
  cout<<"원의 개수 >>";
  cin>>size;
  CircleManager cm(size);
  cm.searchByName();
  cm.searchByArea();

}

