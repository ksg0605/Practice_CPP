/*
C++에서 참조는 세가지로 활용됨

   이미 선언된 변수에 대한 별명 참조자(&)를 이용하여 선언한다. 선언 시 반드시 원본 변수로 초기화하여야 한다.

   int n=2;
   int &refn = n; -> 참조 변수 refn선언, refn은 n에 대한 별명, refn과 n은 동일한 변수

   Circle circle;
   Circle &refc = circle; -> 참조 변수 refc 선언, refc는 circle에 대한 별명. refc와 circle은 동일한 변수

1. 참조변수

   참조 변수를 사용하는 방법은 보통 변수와 동일하며, 참조 변수에 대한 사용은 바로 원본 변수의 사용이다. 

   refn = 3;
   n = 5; -> n=5, refn = 5가 됨
   refn++; -> n=6, refn = 6이 됨
   
   참조 변수는 포인터가 아니다

   refc->setradius(30); ->컴파일 오류, refc.setradius(30)으로 해야 함.

   참조 변수에 대한 포인터 만들수 있다.

   int *p = &refn -> p 는 refn의 주소를 가짐 p는 n의 주소
   *p = 20; -> n=20, refn = 20

   초기화가 없다면 컴파일 에러가 발생한다.
   참조자(&)의 위치에 무관하다.
   참조 변수의 배열을 만들 수 없다.
   참조 변수에 대한 참조 선언이 가능하다.

2. 참조에 의한 호출
3. 함수의 참조 리턴
*/

//기본 타입 변수에 대한 참조
#include  <iostream>
using std::cout, std::cin, std::endl;

int main() {
  cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
  int i = 1;
  int n = 2;
  int &refn = n;
  n = 4;
  refn++;
  cout << i << '\t' << n << '\t' << refn << endl;

  refn = i;
  refn++;
  cout << i << '\t' << n << '\t' << refn << endl;

  int *p = &refn;
  *p = 20;
  cout << i << '\t' << n << '\t' << refn << endl;
}