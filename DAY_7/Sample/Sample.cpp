#include<iostream>
using std::cout, std::cin, std::endl;

class Sample{
  int *p;
  int size;
public:
  Sample();
  Sample(int n);
  void read();
  void write();
  int big();
  ~Sample();
};

Sample::Sample(){
  size = 0;
}

Sample::Sample(int n){
  size = n;
  p = new int [n];
}

void Sample::read(){
  int num;
  for(int i=0; i<size; i++){
    cin>>num;
    p[i] = num;
  }
}

void Sample::write(){
  for(int i=0; i<size; i++){
    cout<<"p["<<i<<"]는 "<<p[i]<<endl;
  }
}

int Sample::big(){
  int max = 0;
  for(int i = 1; i<size; i++){
    if(max <= p[i]){
      max = p[i];
    }
  }
  return max;
}

Sample::~Sample(){
  delete [] p;
}

int main(){
  Sample s(10);
  s.read();
  s.write();
  cout<<"가장 큰 수 는 "<<s.big()<<endl;
}