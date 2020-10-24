#include  <iostream>
#include  <string>
using namespace std;

int main(){
  
  string s;
  cout<<"로미오>>";
  cin>>s;

  string t;
  cout<<"줄리엣>>";
  cin>>t;

  if(s=="가위"&&t=="가위")
    cout<<"비겼습니다.\n";
  else if(s=="가위"&&t=="바위")
    cout<<"줄리엣이 이겼습니다.\n";  
  else if(s=="가위"&&t=="보")
    cout<<"로미오가 이겼습니다.\n";
  else if(s=="바위"&&t=="가위")
    cout<<"로미오가 이겼습니다.\n";  
  else if(s=="바위"&&t=="바위")
    cout<<"비겼습니다.\n";  
  else if(s=="바위"&&t=="보")
    cout<<"줄리엣이 이겼습니다.\n";
  else if(s=="보"&&t=="가위")
    cout<<"줄리엣이 이겼습니다.\n";
  else if(s=="보"&&t=="바위")
    cout<<"로미오가 이겼습니다.\n";     
  else if(s=="보"&&t=="보")
    cout<<"비겼습니다.\n";           
}