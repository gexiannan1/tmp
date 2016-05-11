#include<iostream>
#include <functional>

class A
{
  std::function<void()> callback_;
  public:
  A(const std::function<void()>& f):callback_(f)
  {}
  void notify(void)
  {
    callback_();
  }
};

class Foo
{
  public:
    void operator()(void)
    {
      std::cout << "my name is gexiannan" << std::endl;
    }
};


void call_when_even(int x ,const std::function<void(int)>& f)
{
  if (! (x & 1)         )
  {
    f(x);
  }
}

void output(int x)
{
  std::cout << x << "" << std::endl;
}

int main(void)
{
  Foo foo;
  A aa(foo);
  aa.notify();

  for(int i = 0 ; i < 10 ; ++i)
  {
    call_when_even(i ,output        );
   std::cout << std::endl;
  }
  return 0;
}
