/*
참조에 의한 호출(call by reference)
함수의 매개 변수를 참조 타입으로 선언하여, 매개 변수가 함수를 호출하는 쪽의 실인자를 참조하여 실인자와 공간을 공유하도록 하는 인자 전달 방식이다.

void swap(int &a, int &b);

int m=2, n=9;
swap(m, n);
*/

//참조 매개 변수로 평균 리턴하기
#include  <iostream>
using std::cout, std::cin, std::endl;

bool average(int a[], int size, int &avg){
  if(size <= 0)
    return false;
  int sum = 0;
  for(int i=0; i<size; i++)
  {
    sum += a[i];
  }
  avg = sum/size;
  return true;
}

int main()
{
  int x[] = {0, 1, 2, 3, 4, 5};
  int avg;
  if(average(x, 6, avg))
  {
    cout << "평균은 " << avg << endl;
  }
  else
  {
    cout << "매개 변수 오류 " << endl;
  }

  if(average(x, -2, avg))
  {
    cout << "평균은 " << avg << endl;
  }
  else
  {
    cout << "매개변수 오류 " << endl;
  }
}