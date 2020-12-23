/*
static의 특성
변수와 함수의 생명 주기(life cycle), 사용 범위(scope)를 지정하는 방식 중 하나로서(기억 장소 클래스, storage class)
static으로 선언된 변수와 함수의 생명 주기와 사용 범위는 다음과 같은 특징을 가진다.

생명 주기(life cycle)
: 프로그램이 시작할 떄 생성되고 프로그램이 종료할 때 소멸

사용 범위(scope)
: 변수나 함수가 선언된 범위 내에서 사용, 전역 혹은 지역으로 구분

외부에 전역 변수로 선언해야한다

객체.static멤버
객체포인터->static멤버
클래스명::static멤버 // non-static멤버는 클래스명으로 접근할 수 없다.

전역 변수나 전역 함수를 클래스에 캡슐화
전역 함수나 전역 변수를 없애고 모든 함수나 변수를 클래스 안에 선언하도록 한다.
전역 변수와 전역 함수를 선언하지 말고, 클래스에 static멤버로 선언하여 모두 캡슐화한다.
*/

//static 멤버를 가진 Math 클래스 작성

#include  <iostream>

class Math
{
  public:
    static int abs(int a);
    static int max(int a, int b);
    static int min(int a, int b);
};

int Math::abs(int a)
{
  return a > 0 ? a : -a;
}

int Math::max(int a, int b)
{
  return (a > b) ? a : b;
}

int Math::min(int a, int b)
{
  return (a < b) ? a : b;
}

int main()
{
  std::cout << Math::abs(-5) << std::endl;
  std::cout << Math::max(10, 8) << std::endl;
  std::cout << Math::min(-3, -8) << std::endl;
}

