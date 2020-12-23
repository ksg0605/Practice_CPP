//big() 함수 중복 연습
#include  <iostream>

int big(int a, int b)
{
  if(a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int big(int a[], int size)
{
  int res = a[0];
  for(int i = 1; i < size; i++)
  {
    if(res < a[i])
      res = a[i];
  }
  return res;
}

int main()
{
  int array[5] = {1, 9, -2, 8, 6};
  std::cout << big(2, 3) << std::endl;
  std::cout << big(array, 5) << std::endl;
}