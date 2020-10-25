/*
Wise men say, only fools rush in
But I can't help, falling in love with you

Shall I stay? Would it be a sin?
If I can't help, falling in love with you

Like a river flows, surely to th sea
Darling so it goes, some things aren't meat to be
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
  char buf[10000];
  int alpha[26];
  int len = 0;

  for (int i = 0; i < 26; i++)
  {
    alpha[i] = 0;
  }
  
  cout<<"영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
  cin.getline(buf, 10000, ';');
  for (int i = 0; i < strlen(buf); i++)
  {
    if(isalpha(buf[i])){
      if(buf[i]>=65&&buf[i]<=90){
        buf[i] = tolower(buf[i]);
        alpha[buf[i]-97]++;
        len++;
      }
    }
  }
  cout<<" 총 알파벳 수 " << len << endl << endl;
  for(int i=97; i<=122; i++){
    cout<< (char)i << " ("<< alpha[i-97] << ")\t";
    for(int j = 0; j<alpha[i-97]; j++){
      cout<< "*";
    }
    cout<<endl;
  }
 



}