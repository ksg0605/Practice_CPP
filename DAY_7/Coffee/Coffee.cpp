#include<iostream>
using std::cout, std::cin, std::endl;

class Container{//통 하나 클래스
  int size;//현재저장량
public:
  Container(){size = 10;}
  void fill();//최대량(10)으로 채우기
  void consume();//1만큼 소모하기
  int getSize(); //현재크기 리턴
}; 

class CoffeeVendingMachine{ //커피자판기 클래스
  Container tong[3]; //tong[0]은 커피, tong[1]은 물, tong[2]은 커피
  void fill();//3개의 통을 모두 10으로 채움
  void selectEspresso();//에스프레소 1-1-0 소모
  void selectAmericano();//아메리카노 1-2-0 소모
  void selectSugarCoffee();//설탕커피 1-2-1 소모
  void show();//잔량 출력
public:
  void run();//작동
};

int start = 0;

void Container::fill(){
  size = 10;
}

void Container::consume(){
  size -= 1;
}

int Container::getSize(){
  return size;
}

void CoffeeVendingMachine::fill(){
  for(int i=0; i<3; i++){
    tong[i].fill();
  }
}

void CoffeeVendingMachine::selectEspresso(){
  tong[0].consume();
  tong[1].consume();
  cout<<"에스프레소 드세요"<<endl;
}

void CoffeeVendingMachine::selectAmericano(){
  tong[0].consume();
  tong[1].consume();
  tong[1].consume();
  cout<<"아메리카노 드세요"<<endl;
}
void CoffeeVendingMachine::selectSugarCoffee(){
  tong[0].consume();
  tong[1].consume();
  tong[1].consume();
  tong[2].consume();
  cout<<"설탕커피 드세요"<<endl;
}

void CoffeeVendingMachine::show(){
  cout<<"커피 "<<tong[0].getSize()<<", 물 "<<tong[1].getSize()<<", 설탕 "<<tong[2].getSize()<<endl;
}

void CoffeeVendingMachine::run(){
  int input;
  if(start == 0)
    cout<<"***** 커피자판기를 작동합니다. *****"<<endl;
  start++;
  while(true){
    cout<<"메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
    cin>>input;
    switch(input){
      case 1:
          selectEspresso();
      case 2:    
          selectAmericano();
      case 3:
          selectSugarCoffee();
      case 4:
          show();
      case 5:
          fill(); 
          break;        
    } 
  }
}

int main(){
  CoffeeVendingMachine *coffees = new class CoffeeVendingMachine;
  coffees->run();
  delete coffees;
}