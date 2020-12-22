#include  <iostream>

class MyInStack
{
  private:
    int p[10];
    int tos;
  public:
    MyInStack();
    bool push(int n);
    bool pop(int &n);    
};

MyInStack::MyInStack()
{
  for(int i = 1; i <= 10; i++)
  {
    this->p[i] = 0;
  }
  this->tos = 0;
}

bool MyInStack::push(int n)
{
  if(this->tos >= 1 && this->tos <= 10)
  {
    this->p[tos+1] = n;
    this->tos++;
    return true;
  }
  else
  {
    //std::cout << "stack full" << std::endl;
    return false;
  }
}

bool MyInStack::pop(int &n)
{
  if(this->tos >= 1 && this->tos <= 10)
  {
    n = p[tos];
    p[tos] = 0;
    tos--;
    return true;
  }
  else
  {
    //std::cout << "Empty Stack " << std::endl;
    return false;
  }
}

int main()
{
  MyInStack a;
  for(int i = 0; i < 11; i ++)
  {
    if(a.push(i))
    {
      std::cout << i << ' ';
    }
    else
    {
      std::cout << std::endl << i + 1 << " 번째 stack full" << std::endl;
    }
  }
  int n;
  for(int i = 0; i < 11; i++)
  {
    if(a.pop(n))
    {
      std::cout << n << ' ';
    }
    else
    {
      std::cout << std::endl << i + 1 << " 번 째 stack empty";
    }
  }
  std::cout << std::endl;
}