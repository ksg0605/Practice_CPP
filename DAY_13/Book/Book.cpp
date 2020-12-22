#include  <iostream>
#include  <string>

class Book
{
  private:
    std::string title;
    int price;
  public:
    Book(std::string title, int price);
    Book(const Book &b);
    ~Book();
    void set(std::string title, int price);
    void show();
};

Book::Book(std::string title, int price)
{
  this->title = title;
  this->price = price;
}

Book::Book(const Book &b)
{
  this->title = b.title;
  this->price = b.price;
}

void Book::set(std::string title, int price)
{
  this->title = title;
  this->price = price;
}

void Book::show()
{
  std::cout << title << ' ' << price << "원" << std::endl;
}

int main()
{
  Book cpp("명품C++", 10000);
  Book java = cpp;
  java.set("명품자바", 12000);
  cpp.show();
  java.show();
}