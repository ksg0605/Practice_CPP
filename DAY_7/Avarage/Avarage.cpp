#include<iostream>
using std::cout, std::cin, std::endl;

int main(){
  double sum = 0;
  int number;
  int *numArray = new int[5];
  cout<<"정수 5개 입력>>";
  for(int i=0;i<5;i++){
    cin>>number;
    numArray[i] = number;
    sum += number;  
  }
  cout<<"평균 "<<sum/5<<endl;
  delete [] numArray;
}