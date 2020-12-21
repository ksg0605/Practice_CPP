/*
참조 리턴
함수가 참조를 리턴할 수 있다.
참조 리턴이란 변수 등과 같이 현존하는 공간에 대한 참조의 리턴이다.

  (a) 문자 값을 리턴하는 get()
  char c = 'a'

  char get() // char 값 리턴
  {
    return c; // 변수 c의 값 리탄
  } 

  char a = get(); // a = 'a'가 됨

  get() = 'b'; // 컴파일 오류

  (b) char 타입의 참조를 리턴하는 find()
  char c = 'a'

  char &find()
  {
    return c;
  }

  char a = find();

  char &ref = find();
  ref = 'M'

  find() = 'b'
*/

//참조 리턴
#include  <iostream>

char &find(char s[], int index)
{
  return s[index];
}

int main()
{
  char name[] = "Mike";
  std::cout << name << std::endl;

  find(name, 0) = 'S';
  std::cout << name << std::endl;

  char &ref = find(name, 2);
  ref = 't';
  std::cout << name << std::endl;
}

