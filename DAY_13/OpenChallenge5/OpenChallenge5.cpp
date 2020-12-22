#include  <iostream>
#include  <string>

class Morse
{
  private:
    std::string alphabet[26];
    std::string digit[10];
    std::string slash, question, comma, period, plus, equal;
    std::string savedText2Morse;
  public:
    Morse();
    void text2Morse(std::string text, std::string &morse);
    bool morse2Text(std::string morse, std::string &text);
};

Morse::Morse()
{
  this->alphabet[0] = '.- ';
  this->alphabet[1] = '-... ';
  this->alphabet[2] = '-.-. ';
  this->alphabet[3] = '-.. ';
  this->alphabet[4] = '. ';
  this->alphabet[5] = '..-. ';
  this->alphabet[6] = '--. ';
  this->alphabet[7] = '.... ';
  this->alphabet[8] = '.. ';
  this->alphabet[9] = '.--- ';
  this->alphabet[10] = '-.- ';
  this->alphabet[11] = '.-.. ';
  this->alphabet[12] = '-- ';
  this->alphabet[13] = '-. ';
  this->alphabet[14] = '--- ';
  this->alphabet[15] = '.--. ';
  this->alphabet[16] = '--.- ';
  this->alphabet[17] = '.-. ';
  this->alphabet[18] = '... ';
  this->alphabet[19] = '- ';
  this->alphabet[20] = '..- ';
  this->alphabet[21] = '...- ';
  this->alphabet[22] = '.-- ';
  this->alphabet[23] = '-..- ';
  this->alphabet[24] = '-.-- ';
  this->alphabet[25] = '.-. ';

  this->digit[0] = '----- ';
  this->digit[1] = '.---- ';
  this->digit[2] = '..--- ';
  this->digit[3] = '...-- ';
  this->digit[4] = '....- ';
  this->digit[5] = '..... ';
  this->digit[6] = '-.... ';
  this->digit[7] = '--... ';
  this->digit[8] = '---.. ';
  this->digit[9] = '----. ';

  this->slash = '-..-. ';
  this->question = '..--.. ';
  this->comma = '--..-- ';
  this->period = '.-.-.- ';
  this->plus = '.-.-. ';
  this->equal = '-...- ';
}

void Morse::text2Morse(std::string text, std::string &morse)
{
  int len = text.length();
  for(int i = 0; i < len; i++)
  {
    if(text[i] >= 97 && text[i] < 123)
    {
      morse.append(alphabet[text[i]-97]);
    }
    else if (text[i] >= 48 && text[i] < 58)
    {
      morse.append(digit[text[i]-48]);
    }
    else if (text[i] == 47)
    {
      morse.append(slash);
    }
    else if (text[i] == 63)
    {
      morse.append(question);
    }
    else if (text[i] == 44)
    {
      morse.append(comma);
    }
    else if (text[i] == 46)
    {
      morse.append(period);
    }
    else if (text[i] == 61)
    {
      morse.append(equal);
    }
    else if (text[i] == 32)
    {
      morse.append(" ");
    }
    else if (text[i] == 43)
    {
      morse.append(plus);
    }
    else
    {
      std::cout << "잘못 입력해 비정상 종료!" <<std::endl;
      break;
    }
  }
  std::cout << morse << std::endl;
  this->savedText2Morse = morse;
}

bool Morse::morse2Text(std::string morse, std::string &text)
{
  std::string changeWord;
  std::string compareText;
  std::string morse2 = morse;
  while(morse2.length() > 0)
  {
    int index = morse2.find(" ");
    if(index < 1)
    {
      changeWord="";
      morse2.erase(0, 2);
      compareText.append(" ");
    }
    else
    {
      changeWord = morse2.substr(0, index+1);
      morse2.erase(0, index+1);
    }

    for (int i = 0; i < 26; i++)
    {
      if(changeWord == alphabet[i])
      {
        char word[2] = {i+97, '\0'};
        compareText.append(&word[0]);
        break;
      }
      else if (i < 10 && changeWord == digit[i])
      {
        char word[2] = {i+48, '\0'};
        compareText.append(&word[0]);
        break;
      }
    }
    
    if(changeWord == slash)
    {
      compareText.append("/");
    }
    else if (changeWord == question)
    {
      compareText.append("?");
    }
    else if (changeWord == comma)
    {
      compareText.append(",");
    }
    else if (changeWord == period)
    {
      compareText.append(".");
    }
    else if (changeWord == comma)
    {
      compareText.append("+");
    }
    else if (changeWord == equal)
    {
      compareText.append("=");
    }
  }
  std::cout << compareText;

  if(compareText == text)
    return true;
  else
    return false;
}

int main()
{
  Morse morse;
  std::string t;
  std::string m;

  std::cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다. " << std::endl;
  getline(std::cin, t, '\n');

  morse.text2Morse(t, m);

  std::cout << std::endl << "모스 부호를 다시 영문 텍스트로 바꿉니다. " <<std::endl;

  int trueOrFalse = morse.morse2Text(m, t);
  if(trueOrFalse) std::cout << "good";
  else std::cout << "bad";
}