#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using std::cout, std::cin, std::endl, std::string;

int main(){
  
  cout<<"아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)"<<endl<<">>";
  string str1;
  getline(cin, str1, '\n');
  srand((unsigned)time(0));
  int n = rand();
  str1.
}