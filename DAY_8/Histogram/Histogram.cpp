#include<iostream>
#include<string>
using std::cout, std::cin, std::endl, std::string;

class Histogram{
  string text;
public:
  Histogram(string text);
  void put(string text);
  void putc(char c);
  void print();  
};

Histogram::Histogram(string text){
  this->text = text;
  cout<<text<<endl;
}

void Histogram::put(string text){
  this->text += text;
  cout<<text;
}

void Histogram::putc(char c){
  this->text += c;
  cout<<c;
}

void Histogram::print(){
  int alpha[26] = {0};
  int num = 0;
  for(int i=0; i<text.length(); i++){
    if(isalpha(text[i])){
      char c = tolower(text[i]);
      alpha[c-'a']++;
      num++;
    }
  }
  cout<<endl<<endl;
  cout<<"총 알파벳 수 "<<num;
  cout<<endl<<endl;
  for(int i=0; i<26; ++i){
    char c = 'a'+i;
    cout<<c<<"("<<alpha[i]<<")\t";
    for(int j=0; j<alpha[i]; ++j){
      cout<<"*";
    }
    cout<<endl;
  }
}

int main(){
  Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
  elvisHisto.put("falling in love with you");
  elvisHisto.putc('-');
  elvisHisto.put("Elvis Presley");
  elvisHisto.print();
}