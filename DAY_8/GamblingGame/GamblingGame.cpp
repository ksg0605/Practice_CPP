#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using std::cout, std::cin, std::endl, std::string;

class Player{
  int i;
  string member[2];
public:
  Player();
  void setName(string name);
  string getName();
};

class GamblingGame{
  int num[3];
public:
  GamblingGame();
  void Game();
};

Player::Player(){}

void Player::setName(string name){
  member[i] = name;
}

string Player::getName(){
  i++;
  if(i >= 2){
    i=0;
    return member[i];
  }
  else
  {
      return member[i];
  }
  
}

GamblingGame::GamblingGame(){
  srand((unsigned)time(0));
}

void GamblingGame::Game(){
  cout<<"***** 갬블링 게임을 시작합니다. *****"<<endl;
  Player p;
  string name;
  cout<<"첫번째 선수 이름>>";
  getline(cin, name);
  p.setName(name);
  cout<<"두번째 선수 이름>>";
  getline(cin, name);
  p.setName(name);

  string named;
  while(true){
    named = p.getName();
    cout<<named<<"<Enter>";
    getline(cin, name);
    for(int i=0; i<3; i++){
      num[i] = rand()%3;
    }    
    cout<<"\t\t"<<num[0]<<"\t"<<num[1]<<"\t"<<num[2]<<"\t";
    if(num[0]==num[1]&&num[1]==num[2]){
      cout<<named<<"님 승리!!"<<endl;
    }
  }
}

int main(){
  GamblingGame g;
  g.Game();
}