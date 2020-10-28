#include<iostream>
#include<string>
using namespace std;

class Integer{
  int integ;
  string str;
  int strToInt;
public:
  Integer(int i);
  Integer(string s);
  int get();  
  void set(int i);
  bool isEven();  
};

Integer::Integer(int i){
  integ = i;
}

Integer::Integer(string s){
  str = s;
  strToInt = stoi(str);
}

int Integer::get(){
  return integ;
}

void Integer::set(int i){
  integ = i;
}

bool Integer::isEven(){
  if(integ%2 == 0)
    return true;
  else
    return false;  
}

int main(){
  Integer n(30);
  cout<<n.get()<<' ';
  n.set(50);
  cout<<n.get()<<' ';

  Integer m("300");
  cout<<m.get()<<' ';
  cout<< m.isEven();
}