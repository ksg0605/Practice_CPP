/*
static 멤버 함수는 오직 static 멤버들만 접근
static 멤버 함수는 객체가 생성되지 않은 어떤 시점에서도 호출될 수 있고, 클래스 이름으로 직접 호출될 수 있기 떄문에 static멤버 함수에서 non-static 멤버에 접근하는 것은 허용되지 않는다.
static 멤버 함수는 this를 사용할 수 없다.
static 멤버 함수는 객체가 생기기 전부터 호출 가능하므로, static 멤버 함수에서는 this를 사용할 수 없도록 한다.
*/

//static 멤버를 공유의 목적으로 사용하는 예
#include  <iostream>

class Circle
{
  private:
    static int numOfCircles;
    int radius;
  public:
    Circle(int r = 1);
    ~Circle();
    double getArea();
    static int getNumOfCircles();    
};

int Circle::numOfCircles = 0;

Circle::Circle(int r)
{
  radius = r;
  numOfCircles++;
}

Circle::~Circle()
{
  numOfCircles--;
}

double Circle::getArea()
{
  return 3.14*radius*radius;
}

int Circle::getNumOfCircles()
{
  return numOfCircles;
}

int main()
{
  Circle *p = new Circle[10];
  std::cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << std::endl;

  delete [] p;
  std::cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << std::endl;
  
  Circle a;
  std::cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << std::endl;

  Circle b;
  std::cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << std::endl;
}