#include  <iostream>

class Accumulator
{
  private:
    int value;
  public:
    Accumulator(int value);
    Accumulator& add(int n);
    int get();
};

Accumulator::Accumulator(int value)
{
  this->value = value;
}

Accumulator &Accumulator::add(int n)
{
  this->value = this->value + n;
  return *this;
}

int Accumulator::get()
{
  return this->value;
}

int main()
{
  Accumulator acc(10);
  acc.add(5).add(6).add(7);
  std::cout << acc.get() << std::endl;
}