/*  참조는 이미 선언된 변수에 대한 별명(alias)이다.
    참조자(&)이용하여 선언, 반드시 원본 변수로 초기화.
    참조 변수는 포인터가 아님                     */

//기본 타입 변수에 대한 참조

#include<iostream>
using std::cout, std::cin, std::endl;

int main(){
  cout<<"i"<<'\t'<<"n"<<'\t'<<"refn"<<endl;
  int i = 1;
  int n = 2;
  int &refn = n;
  n = 4;
  refn++;
  cout<<i<<'\t'<<n<<'\t'<<refn<<endl;

  refn = i;
  refn++;
  cout<<i<<'\t'<<n<<'\t'<<refn<<endl;

  int *p = &refn;
  *p = 20;
  cout<<i<<'\t'<<n<<'\t'<<refn<<endl;
}
