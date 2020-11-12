/*  참조 리턴 : 변수 등과 같이 현존하는 공간에 대한 참조의 리턴이다.  */

#include<iostream>
using std::cout, std::cin, std::endl;

//배열 s의 index 원소 공간에 대한 참조를 리턴하는 함수
char &find(char s[], int index){
  return s[index];
}

int main(){
  char name[] = "Mike";
  cout<<name<<endl;

  find(name, 0) = 'S';
  cout<<name<<endl;

  char &ref = find(name, 2);
  ref = 't';
  cout<<name<<endl;
}