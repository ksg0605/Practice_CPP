/*  참조에 의한 호출(call by reference) 
    함수를 호출하는 쪽의 실인자를 참조하여 실인자와 공간을 공유하도록 하는 인자전달방식
    참조 타입으로 선언된 함수의 매개 변수를 참조 매개변수라고 부른다.
    함수의 원형에 의해 구분된다.
    참조 매개변수가 왜 필요한가에 대한 예제*/

#include<iostream>
using std::cout, std::cin, std::endl;

bool average(int a[], int size, int &avg){//리턴 타입을 bool로 하고 평균값을 전달하기 위해 참조 매개변수를 추가함
  if(size <= 0)
    return false;
  int sum = 0;
  for(int i = 0; i < size; i++)
    sum += a[i];
  avg = sum/size; //참조 매개변수 avg에 평균값 전달
  return true;
}

int main(){
  int x[] = {0, 1, 2, 3, 4, 5};
  int avg;
  if(average(x, 6, avg)) //avg에는 평균이 넘어오고 average()는 true 리턴
    cout<<"평균은 "<<avg<<endl;
  else
    cout<<"매개 변수 오류"<<endl;

  if(average(x, -2, avg)) //avg의 값은 의미 없고, average()는 false 리턴
    cout<<"평균은 "<<avg<<endl;
  else
    cout<<"매개 변수 오류"<<endl;  

}