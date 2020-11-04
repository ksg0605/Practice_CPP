#include<iostream>
#include<string>
#include"Person.h"
using std::cout, std::cin, std::endl, std::string;

int main(){
  string name;
  string tel;
  Person *persons = new Person[3];
  cout<<"이름과 전화 번호를 입력해 주세요"<<endl;
  for(int i=0; i<3; i++){
    cout<<"사람 "<<i+1<<">>";
    cin>>name>>tel;
    persons[i].set(name, tel);
  }
  cout<<"모든 사람의 이름은 "<<persons[0].getName() <<persons[1].getName() <<persons[2].getName()<<endl;
  cout<<"전화번호 검색합니다. 이름을 입력하세요>>";
  cin>>name;
  for(int i=0;i<3;i++){
    if(name == persons[i].getName()){
      cout<<"전화번호는 "<<persons[i].getTel();
    }
  }
}