#include  <iostream>
#include  <string>
using namespace std;

int main(){
  int input, num;
  cout<<"***** 승리장에 오신 것을 환영합니다. *****\n";
  cout<<"짬뽕:1, 짜장:2, 군만두:3, 종료4>>1";
  cin>>input;
  cout<<"몇인분?";
  cin>>num;
    if(input == 1)
      cout<<"짬뽕"<<num<<"인분 나왔습니다.\n";
    else if(input == 2)
      cout<<"짜장"<<num<<"인분 나왔습니다.\n";
    else if(input == 3)
      cout<<"군만두"<<num<<"인분 나왔습니다.\n";
    else if(input == 4)
      cout<<"오늘 영업은 끝났습니다.";
    else
      cout<<"다시 주문하세요!";

  

  
}