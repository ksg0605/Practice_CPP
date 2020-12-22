#include  <iostream>

char &find(char a[], char c, bool &success)
{
  int len = strlen(a);
  for(int i = 0; i < len; i++)
  {
    if(a[i] == c)
    {
      success = true;
      return a[i];
      break;
    }
    else
    {
      success = false;
    }
    
  }
}
  
int main()
{
  char s[] = "Mike";
  bool b = false;
  char &loc = find(s, 'M', b);
  if(b == false)
  {
    std::cout << "M을 발견할 수 없다. " << std::endl;
    return 0;
  }
  loc = 'm';
  std::cout << s << std::endl;
}