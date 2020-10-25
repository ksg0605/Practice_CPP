#include  <iostream>
#include  <string>
using namespace std;

int main(){
  char exit[10];
  cout<<"종료하고싶으면 yes를 입력하세요";
  cin>>exit;
  while(strcmp(exit, "yes")!=0){
    cout<<"종료하고싶으면 yes를 입력하세요";
    cin>>exit;
  }
  cout<<"종료합니다...";
}
