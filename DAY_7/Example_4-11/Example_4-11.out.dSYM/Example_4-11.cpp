#include<iostream>
#include<string>
using std::cout, std::cin, std::endl, std::string;

int main(){
  string str;
  string address("서울시 성북구 삼선동 389");
  string copyAddress(address);

  char text[] = {'L', 'O', 'V', 'E', ' ', 'C', '+', '+', '\0'};
  string title(text);

  cout<<str<<endl;
  cout<<address<<endl;
  cout<<copyAddress<<endl;
  cout<<title<<endl;
}