#include  <iostream>
#include  <string>
using namespace std;

int main(){
  char name[30];
  char address[100];
  int old;

  cout<<"이름은?";
  cin>>name;
  cout<<"주소는?";
  cin.getline(address, 100, '\n');
  cout<<"나이는?";
  cin>>old;



}