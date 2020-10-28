#include<iostream>
#include<string>
using namespace std;

class Date{
    int y, m, d;
public:    
    Date(int year, int month, int date);
    Date(string day);
    void show();
    int getYear();
    int getMonth();
    int getDay();
};

Date::Date(int year, int month, int date){
    y = year;
    m = month;
    d = date;
}

Date::Date(string day){
    y = stoi(day.substr(0, 4));
    m = stoi(day.substr(5, 7));
    d = stoi(day.substr(7, 10));
}

void Date::show(){
    cout<<y<<"년"<<m<<"월"<<d<<"일"<<endl;
}

int Date::getYear(){
    return y;
}

int Date::getMonth(){
    return m;
}

int Date::getDay(){
    return d;
}

int main(){
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout<<birth.getYear()<<','<<birth.getMonth()<<','<<birth.getDay()<<endl;

}