#include<iostream>
#include<string>
using namespace std;

class Account{
  int id, balance;
  string name;
public:
  Account();
  Account(string n, int i, int m);
  string getOwner();
  void deposit(int money);
  int withdraw(int money);
  int inquiry();    
};

Account::Account(){
  name = "  ", id = 0, balance = 0;
}

Account::Account(string n, int i, int m){
  name = n;
  id = i;
  balance = m;
}

void Account::deposit(int money){
  balance += money;
}

int Account::withdraw(int money){
  balance -= money;
  return money;
}

int Account::inquiry(){
  return balance;
}

string Account::getOwner(){
  return name;
}

int main(){
  Account a("kitae", 1, 5000);
  a.deposit(50000);
  cout<<a.getOwner()<<"의 잔액은"<<a.inquiry()<<endl;
  int money = a.withdraw(20000);
  cout<<a.getOwner()<<"의 잔액은"<<a.inquiry()<<endl;
}