#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
  char calculate[100];
  int a, c;
  int b;
  cout<<"?";
  cin.getline(calculate, 100, '\n');
  a = atoi(strtok(calculate, " "));
  b = atoi(strtok(NULL, " "));
  c = atoi(strtok(NULL, " "));
  /*cin.getline(num1, 100, '\t');
  cin.getline(calculate, 100, '\t');
  cin.getline(num2, 100, '\n');*/
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
}