#include<iostream>
#include<string>
using std::cout, std::cin, std::endl, std::string;

int main(){
  string str;
  int count = 0;
  int index=0;
  int i=0;
  cout<<"문자열 입력>>";
  getline(cin, str, '\n');
  for( i=1; i<str.length(); i++){
    index = str.find('a', i);
    if(str.find('a', i) != str.find('a', i-1))
      count++;
  }
  cout<<"문자 a는 "<<count<<"개 있습니다."<<endl;
}