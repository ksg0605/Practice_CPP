#include  <iostream>
using namespace std;

int main(){
  cout<<"너비를 입력하세요";

  int width;
  cin>>width;

  cout<<"높이를 입력하세요";
  
  int height;
  cin>>height;

  /*
  cout<<면적과 높이를 입력하세요;
  cin>>width>>height;
  cout<<width<<"\n"<<height<<"\n";
  이런식으로도 사용가능(연속으로)
  */

  int area = width*height;
  cout<<"면적은 "<<area<<"\n";
}