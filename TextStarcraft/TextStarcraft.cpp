#include<string>
#include<iostream>
using std::cout, std::cin, std::endl;

class Marine{
  int hp;               //  마린 체력
  int coord_x, coord_y; //  마린 위치
  int damage;           //  공격력
  bool is_dead;         //  생존
  char *name;           //  이름

public:
  Marine();                                       //  기본 생성
  Marine(int x, int y, const char *marine_name);  //  이름까지 지정
  Marine(int x, int y);                           //  x, y 좌표에 이름 지정
  ~Marine();

  int attack();
  void be_attacked(int damage_earn);
  void move(int x, int y);

  void show_status();
};

Marine::Marine(){
  hp = 50;
  coord_x = coord_y = 0;
  damage = 5;
  is_dead = false;
  name = NULL;
}

Marine::Marine(int x, int y, const char* marine_name){
  name = new char[strlen(marine_name) + 1];
  strcpy(name, marine_name);

  coord_x = x;
  coord_y = y;
  hp =50;
  damage = 5;
  is_dead = false;
}

Marine::Marine(int x, int y){
  coord_x = x;
  coord_y = y;
}

Marine::~Marine(){
  hp = 50;
}

int Marine::attack(){
  return damage;
}

void Marine::be_attacked(int damage_earn){
  hp -= damage_earn;
  if(hp <= 0) is_dead = true;
}

void Marine::show_status(){
  cout<<" *** Marine *** " <<endl;
  cout<<" Location : ( "<<coord_x<<","<<coord_y<<")"<<endl;
  cout<<" HP : "<< hp << endl;
}

int main(){
  Marine marine1(2, 3);
  Marine marine2(3, 5);

  marine1.show_status();
  marine2.show_status();

  cout<<endl<<"마린 1 이 마린 2 를 공격! "<< endl;
  marine2.be_attacked(marine1.attack());

  marine1.show_status();
  marine2.show_status();
}