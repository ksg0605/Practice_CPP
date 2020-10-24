#include  <iostream>
using namespace std;

int main(){
  double array[6];
  int max=0;
  array[0] = 0;
  cout<<"5개의 실수를 입력하라>>";
  for(int i=0; i<6; i++){
    cin>>array[i];
    if(array[i]>max)
      max = array[i];
  }
  cout<<'\n'<<"제일 큰 수 = "<<max;

}