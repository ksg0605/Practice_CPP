#include  <iostream>
using std::cout, std::cin, std::endl;

void half(double &n){
  n = n/2;
}

//다음 main() 함수와 실행 결과를 참고하여 half() 함수를 작성하여라
int main(){
  double n =20;
  half(n);  // n의 반값을 구해 n을 바꾼다.
  cout << n;  // 10이 출력된다
}
