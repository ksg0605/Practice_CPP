#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using std::cout, std::cin, std::endl, std::string;

int main(){
  string str1;
  cout<<"아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";

  while(true){
    cout<<endl<<">>";  
    getline(cin, str1);
    if(str1 == "exit")
      break;
    for(int i= str1.length()-1; i>=0; i++){
      cout<<str1[i];
    }      
  }
}