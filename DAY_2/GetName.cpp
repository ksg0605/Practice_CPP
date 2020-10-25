#include  <iostream>
#include  <string>
using namespace std;

int main(){
  char name[100];
  cout<<"5명의 이름을 ';'으로 구분하여 입력하세요\n>>";
  for(int i=1; i<6; i++){
    cin.getline(name, 100, ';');
    cout<<i<<" : " <<name<<endl;
  }

}