#include  <iostream>
using namespace std;

int main(){
  cout<<"주소를 입력하세요";

  char address[100];
  cin.getline(address, 100, '\n');  //cin.getline(address, 100); 과 같은 역할을 수행한다.

  cout<<"주소는 "<<address<<" 입니다.";
}