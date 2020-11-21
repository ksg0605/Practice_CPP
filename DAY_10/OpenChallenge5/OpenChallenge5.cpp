#include<iostream>
#include<string>
using std::cout, std::cin, std::endl, std::string;

class Morse{
  string alphabet[26];                                        //알파벳의 모스 부호 저장
  string digit[10];                                           //숫자의 모스 부호 저장
  string slash, question, comma, period, plus, equal;         //특수 문자의 모스 부호 저징
  string savedText2Morse;
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
  
  slash = '-..-. ';
  question = '..--.. ';
  comma = '--..--';
  period = '.-.-.- ';
  plus = '.-.-. ';
  equal = '-...-';
}

void Morse::text2Mores(string text, string &morse){
  int len = text.length();
  for(int i = 0; i < len; i++){
    if(text[i] >= 97 && text[i] < 123){
      morse.append(alphabet[text[i]-97]);
    }
    else if(text[i] >= 48 && text[i] < 58){
      morse.append(digit[text[i]-48]);
    }
    else if(text[i] == 47){
      morse.append(slash);
    }
    else if(text[i] == 63){
      morse.append(question);
    }
    else if(text[i] == 44){
      morse.append(comma);
    }
    else if(text[i] == 46){
      morse.append(period);
    }
    else if(text[i] == 61){
      morse.append(equal);
    }
    else if(text[i] == 32){
      morse.append("  ");
    }
    else if(text[i] == 43){
      morse.append(plus);
    }
    else{
      cout<<"잘못 입력해 비정상 종료!"<<endl;
      break;
    }
  }
  cout<< morse << endl;
  this->savedText2Morse = morse;
}

bool Morse::morse2Text(string morse, string& text){
  string changeWord;
  string compareText;
  string morse2 = morse;
  while(morse2.length()>0){

    int index = morse2.find(" ");
    if(index < 1){
      changeWord="";
      morse2.erase(0, 2);
      compareText.append(" ");
    }
    else{
      changeWord = morse2.substr(0, index+1);
      morse2.erase(0, index+1);
    }

    for(int i=0; i<26; i++){
      if(changeWord == alphabet[i]){
        char word[2] = {i+97, '\0'};
        compareText.append(&word[0]);
        break;
      }
      else if(i<10 && changeWord==digit[i]){
        char word[2] = {i+48, '\0'};
        compareText.append(&word[0]);
        break;
      }
    }

    if(changeWord == slash){
      compareText.append("/");
    }
    else if(changeWord == question){
      compareText.append("?");
    }
    else if(changeWord == comma){
      compareText.append(",");
    }
    else if(changeWord == period){
      compareText.append(".");
    }
    else if(changeWord == comma){
      compareText.append("+");
    }
    else if(changeWord == equal){
      compareText.append("=");
    }
    
  }
  cout<<compareText;

  if(compareText == text)
    return true;
  else
    return false;  
}

int main(){
  Morse morse;
  string t;
  string m;

  cout<<"아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다."<<endl;
  getline(cin, t, '\n');

  morse.text2Mores(t, m);

  cout<<endl<<"모스 부호를 다시 영문 텍스트로 바꿉니다." <<endl;
  
  int trueOrFalse = morse.morse2Text(m, t);
  if(trueOrFalse) cout<<"good";
  else cout<<"bad";
}