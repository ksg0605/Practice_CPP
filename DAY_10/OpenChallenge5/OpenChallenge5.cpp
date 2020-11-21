#include<iostream>
#include<string>
using std::cout, std::cin, std::endl, std::string;

class Morse{
  string alphabet[26];                                        //알파벳의 모스 부호 저장
  string digit[10];                                           //숫자의 모스 부호 저장
  string slash, question, comma, period, plus, equal;         //특수 문자의 모스 부호 저징
public:
  Morse();                                                    //배열 및 특수 문자의 모스 부호 초기화
  void text2Mores(string text, string &morse);                //영문 텍스트를 모스 부호로 변환
  bool morse2Text(string morse, string &text);                //모스 부호를 영문 텍스트로 변환
};

Morse::Morse(){
  alphabet[0]='.- ';  
  alphabet[1]='-... ';
  alphabet[2]='-.-. ';
  alphabet[3]='-.. ';
  alphabet[4]='. ';
  alphabet[5]='..-. ';
  alphabet[6]='--. ';
  alphabet[7]='.... ';
  alphabet[8]='.. ';
  alphabet[9]='.--- ';
  alphabet[10]='-.- ';
  alphabet[11]='.-.. ';
  alphabet[12]='-- ';
  alphabet[13]='-. ';
  alphabet[14]='--- ';
  alphabet[15]='.--. ';
  alphabet[16]='--.- ';
  alphabet[17]='.-. ';
  alphabet[18]='... ';
  alphabet[19]='- ';
  alphabet[20]='..- ';
  alphabet[21]='...- ';
  alphabet[22]='.-- ';
  alphabet[23]='-..- ';
  alphabet[24]='-.-- ';
  alphabet[25]='-.. ';

  digit[0] = '----- ';
  digit[1] = '.---- ';
  digit[2] = '..--- ';
  digit[3] = '...-- ';
  digit[4] = '....- ';
  digit[5] = '..... ';
  digit[6] = '-.... ';
  digit[7] = '--... ';
  digit[8] = '---.. ';
  digit[9] = '----. ';
  
  slash, question, comma, period, plus, equal = " ";         //특수 문자의 모스 부호 저징
}

void Morse::text2Mores(string text, string &morse){
  for(int i = 0; i < text.length(); i++){
    
  }
}