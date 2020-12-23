//중복된 생성자들을 디폴트 매개 변수를 이용한 간소화 연습
#include  <iostream>

class MyVector
{
  private:
    int *p;
    int size;
  public:
    MyVector();
    MyVector(int n);
    ~MyVector();
};

MyVector::MyVector()
{
  p = new int [100];
  size = 100;
}

MyVector::MyVector(int n)
{
  p = new int [n];
  size = n;
}

MyVector::~MyVector()
{
  delete [] p;
}

int main()
{
  MyVector *v1, *v2;
  v1 = new MyVector();
  v2 = new MyVector(1024);

  delete v1;
  delete v2;
}