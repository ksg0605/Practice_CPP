#include  <iostream>
#include  <string>

class Buffer
{
  private:
    std::string text;
  public:
    Buffer(std::string text);
    void add(std::string next);
    void print();
};

Buffer::Buffer(std::string text)
{
  this->text = text;
}

void Buffer::add(std::string next)
{
  this->text += next;
}

void Buffer::print()
{
  std::cout << text << std::endl;
}

Buffer& append(Buffer &buffer, std::string text)
{
  buffer.add(text);
  return buffer;
}

int main()
{
  Buffer buf("Hello");
  Buffer &temp = append(buf, "Guys");
  temp.print();
  buf.print();
}