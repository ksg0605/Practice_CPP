#include  <iostream>

class Dept
{
  private:
    int size;
    int *scores;
  public:
    Dept(int size);
    Dept(const Dept &dept);
    ~Dept();
    int getSize();
    void read();
    bool isOver60(int index);
};

Dept::Dept(int size)
{
  this->size = size;
  scores = new int[size];
}

Dept::Dept(const Dept &dept)
{
  this->size = dept.size;
  scores = new int[dept.size];
  for(int i = 0; i < dept.size; i++)
  {
    this->scores[i] = dept.scores[i];  
  }
}

Dept::~Dept()
{
  delete [] scores;
}

int Dept::getSize()
{
  return size;
}

void Dept::read()
{
  std::cout << size << "개 정수 입력 >> ";
  for(int i = 0; i < size; ++i)
  {
    int n;
    std::cin >> n;
    scores[i] = n;
  }
}
bool Dept::isOver60(int index)
{
  if(scores[index] > 60)
    return true;
  else
    return false;  
}

int countPass(Dept dept)
{
  int count = 0;
  for(int i = 0; i < dept.getSize(); i++)
  {
    if(dept.isOver60(i))
      count++;  
  }
  return count;
}

int main()
{
  Dept com(10);
  com.read();
  int n = countPass(com);
  std::cout << "60점 이상은 " << n << "명";
}