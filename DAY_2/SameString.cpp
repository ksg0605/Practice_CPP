#include  <iostream>
#include  <string>
using namespace std;

int main(){
  char pwd[10];
  char rPwd[10];
  cout<<"새 암호를 입력하세요>>";
  cin>>pwd;
  cout<<"새 암호를 다시 한번 입력하세요>>";
  cin>>rPwd;
  
  if(strcmp(pwd,rPwd) == 0)
    cout<<"같습니다";
  else
    cout<<"다릅니다";
    
}