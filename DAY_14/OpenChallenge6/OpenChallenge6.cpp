/*
up & down 게임 만들기
게임에 참석하는 사람은 2명, 번갈아 가며 숨겨진 정답에 접근해 간다.
up & down 게임은 전체적으로 UpAndDownGame 클래스로 작성하고 static 멤버로만 구성하라
선수를 표현하기 위해 Person 클래스를 작성하고 main() 함수는 프로그램을 시작시키는 정도로만 구현하라.
*/

#include  <iostream>
#include  <ctime>
#include  <cstdlib>
#include  <string>

class UpAndDownGame //only static member
{
  private:
    static int randomNumber;
    static int inputNumber;
    static int min;
    static int max;
  public:
    static void gameStart(); //난수 생성
    static void gameUpAndDown(); // input, output
    static int gameInputValuePlayer1();
    static int gameInputValuePlayer2();
    static void gameSet(); // 정답 맞으면 true, 틀리면 false
};

class Person
{
  private:
    static std::string player1;
    static std::string player2;
  public:
    static void setPlayer1();
    static void setPlayer2();
    static std::string showPlayer1();
    static std::string showPlayer2();
};

int UpAndDownGame::min = 0;
int UpAndDownGame::max = 99;
int UpAndDownGame::randomNumber = 0;
int UpAndDownGame::inputNumber = 0;
std::string Person::player1 = "";
std::string Person::player2 = "";

void UpAndDownGame::gameStart()
{
  Person::setPlayer1();
  Person::setPlayer2();
  srand((unsigned)time(0));
  randomNumber = rand();
  randomNumber = randomNumber % 100;
  std::cout << "Up & Down 게임을 시작합니다." << std::endl;
  std::cout << "답은 0과 99사이에 있습니다." << std::endl;
}

void UpAndDownGame::gameUpAndDown()
{
  int result = 0;
  if(inputNumber < randomNumber)
  {
    min = inputNumber;
    std::cout << "답은" << min << "과 " << max << "사이에 있습니다." << std::endl;
  }
  else if (inputNumber == randomNumber)
  {
    std::cout << &Person::showPlayer1 << "가 이겼습니다!!" << std::endl;
    result = 1;
  }
  else
  {
    max = inputNumber;
    std::cout << "답은" << min << "과 " << max << "사이에 있습니다." << std::endl;
  }
  
  std::cout << &Person::showPlayer2 << ">> ";
  std::cin >> inputNumber;
  
}

int UpAndDownGame::gameInputValuePlayer1()
{
  std::cout << &Person::showPlayer1 << ">> ";
  std::cin >> inputNumber;
  return inputNumber;
}

int UpAndDownGame::gameInputValuePlayer2()
{
  std::cout << &Person::showPlayer2 << ">> ";
  std::cin >> inputNumber;
  return inputNumber;
}

void UpAndDownGame::gameSet()
{

}

void Person::setPlayer1()
{
  std::cout << "플레이어1의 이름을 입력하세요>> ";
  std::cin >> player1; 
  //std::cout << std::endl;
}

void Person::setPlayer2()
{
  std::cout << "플레이어2의 이름을 입력하세요>> ";
  std::cin >> player2; 
  //std::cout << std::endl;
}

std::string Person::showPlayer1()
{
  return player1;
}

std::string Person::showPlayer2()
{
  return player2;
}

int main()
{
  UpAndDownGame game;
  game.gameStart();
  while (1)
  {
    game.gameInputValuePlayer1();
    game.gameUpAndDown();
    game.gameInputValuePlayer2();
    game.gameUpAndDown();
  }
}