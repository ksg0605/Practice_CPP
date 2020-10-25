#include  <iostream>
#include  <string>
using namespace std;

int main(){
  char word[100];
  cout<<"문자열 입력>>";
  cin>>word;
  for(int i = 0; i<strlen(word); i++){
    for(int j = 0; j<=i; j++){
      cout<<word[j];
    }
    cout<<'\n';
  }
}